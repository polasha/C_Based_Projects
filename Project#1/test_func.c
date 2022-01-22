#define NINPUT_ARGUMENTS 4 // Must be first in the file (value 1 to 7)!
// Compile using (on MATLAB Command Window):
// mex -R2018a example_var_inputs_one_output.c
// Call (from MATLAB Command Window): 
// out = example_var_inputs_one_output(1,2,10.5)
// NINPUT_ARGUMENTS is the number of input arguments, 
// include corresponding number of input doubles (input1,input2,etc.) in line 11
// double MATLAB_main(double input1, double input2, double input3)
// above is for NINPUT_ARGUMENTS = 3 as an example
#include "MULTIPLE_INPUTS_ONE_OUTPUT_REAL.h"
double MATLAB_main(double var1, double var2, double var3, double var4)
{
    double result;
    // Calculate result
    result = var1 * var2 * var3 * var4 ;
    // Return the result
    return result;
}
