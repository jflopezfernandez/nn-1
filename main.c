/** This is a basic implementation of a feed-forward backpropagation neural
 *  network in C, as demonstrated by Dr. John Bullinaria from The University
 *  of Birmingham Department of Computer Science.
 *
 *  @author Dr. John Bullinaria
 *  @date September 05, 2017
 *
 */

#include "includes/main.h"

#define ACTIVATION_FUNCTION(x) (1.0 / (1.0 + exp(-(x))))
#define ACTIVATION_FUNCTION_DERIVATIVE(x) (ACTIVATION_FUNCTION(x) * (1.0 - ACTIVATION_FUNCTION(x)))


int main()
{
  /** It is convenient to think of the activations flowing through layers of neurons, so if there are 'NumInput' neurons
   *  in the input layers, the total activation flowing into a hidden neuron is just the sum 'SumH' over all
   *  'Input[i] * Weight[i]', where 'Weight[i]' is the strength/weight of the connection between unit 'i' in the input
   *  layer and our unit in the hidden layer. Each neuron will also have a bias, or resting state, that is added to the
   *  sum of inputs, and it is convenient to call this 'Weight[0]'. This acts as the neuron "threshold". We can then
   *  compute the hidden activation with the following:
   */
   //Test Comment Javier was here

  SumH = Weight[0];
  for (int i = 1; i <= NumInput; ++i)
    SumH += Input[i] * Weight[i];

  Hidden = ACTIVATION_FUNCTION(-(SumH));
  printf("Hidden: %f\n", Hidden);


  return (EXIT_SUCCESS);
}