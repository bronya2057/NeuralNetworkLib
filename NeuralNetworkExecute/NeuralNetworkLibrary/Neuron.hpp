#ifdef NEURALNETWORKLIBRARY_EXPORTS
#define NEURALNETWORKLIBRARY_API __declspec(dllexport)
#else
#define NEURALNETWORKLIBRARY_API __declspec(dllimport)
#endif

class NEURALNETWORKLIBRARY_API Neuron
{
public:
   Neuron();
   ~Neuron();
};

