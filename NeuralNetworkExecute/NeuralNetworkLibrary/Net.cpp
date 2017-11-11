#include "Net.hpp"
#include <iostream>

//Number of layers 
//{3,2,1} 3 - input layers, 2 - hidden layers, 1 -output layer
Net::Net(const std::vector<unsigned>& topology)
{
   unsigned numberOfLayers = topology.size();
   
   //Create numberOfLayers layers
   for (size_t layerNumber = 0; layerNumber < numberOfLayers; ++layerNumber)
   {
      //Push back newly created layer to all layers
      mLayers.push_back(Layer());

      //We created a new layer, now add a bias neuron and fill it
      //with other neurons
      //bias neuron has no input and has constant 1.0 ouptut
      // <= for another one bias neuron
      for (size_t neuronNumber = 0; neuronNumber <= topology[layerNumber]; neuronNumber++)
      {
         //.back() last element in the container (last layer)
         //push the constructed Neuron to Layer
         mLayers.back().push_back(Neuron());
         std::cout << "Neuron made in layer: " << layerNumber<<"\n";
      }
      std::cout << layerNumber << " Layer has " << mLayers.back().size()<<"\n";
   }
}

void Net::feedForward(const std::vector<double>& inputValues)
{
}

void Net::backPropagation(const std::vector<double>& targetValues)
{
}

void Net::getResults(const std::vector<double>& resultValues) const
{
}
