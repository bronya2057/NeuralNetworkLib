#include <iostream>
#include <vector>

#include "Net.hpp"

using namespace std;

//purpose input output
int main()
{
   //Number of layers 
   //{3,2,1} 3 - input layers, 2 - hidden layers, 1 -output layer
   vector<unsigned> topology;
   Net myNet(topology);

   vector<double> inputValues;
   //Feed some inputs
   myNet.feedForward(inputValues);
   //Tell the network what the outputs supposed to be
   //BackPropagation learning
   //TargetOutputs
   vector<double> targetValues;
   myNet.backPropagation(targetValues);

   vector<double> resultVals;
   myNet.getResults(resultVals);
}