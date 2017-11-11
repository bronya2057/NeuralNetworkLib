#ifdef NEURALNETWORKLIBRARY_EXPORTS
#define NEURALNETWORKLIBRARY_API __declspec(dllexport)
#else
#define NEURALNETWORKLIBRARY_API __declspec(dllimport)
#endif
#include <vector>
#include "Neuron.hpp"

class NEURALNETWORKLIBRARY_API Net 
{

   typedef std::vector<Neuron> Layer;

public:
   /*******************************************************
    * Constructor sets the topology of neural network
    * 
    * @param: topology Example {3,2,1} 3 input layers 2 hidden layers 1 output
   *******************************************************/
   explicit Net(const std::vector<unsigned>& topology);

   /*******************************************************
    * Just read the input values and pass them on to the hidden layer of neural network.
    * 
    * @param:   inputValues - array of double wieghts for each neuron
    *******************************************************/
   void feedForward(const std::vector<double>& inputValues);

   /*******************************************************
   * 
   * 
   * @param:   inputValues - array of double real world data that we know the output for
   *******************************************************/
   void backPropagation(const std::vector<double>& targetValues);

    /*******************************************************
    * 
    * 
    * @param:  resultValues
    *******************************************************/
   void getResults(const std::vector<double>& resultValues) const;

private:
   std::vector<Layer> mLayers;
};
