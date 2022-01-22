// Course: Using C with MATLAB, University of Oulu
#include "mex.h"
#include <complex.h>
#include <tgmath.h>
#include <omp.h>

#if NINPUT_ARGUMENTS == 1
double MATLAB_main(double);
#elif NINPUT_ARGUMENTS == 2
double MATLAB_main(double, double);
#elif NINPUT_ARGUMENTS == 3
double MATLAB_main(double, double, double);
#elif NINPUT_ARGUMENTS == 4
double MATLAB_main(double, double, double, double);
#elif NINPUT_ARGUMENTS == 5
double MATLAB_main(double, double, double, double, double);
#elif NINPUT_ARGUMENTS == 6
double MATLAB_main(double, double, double, double, double, double);
#elif NINPUT_ARGUMENTS == 7
double MATLAB_main(double, double, double, double, double, double, double);
#endif

void mexFunction( int nlhs, mxArray *plhs[],
        int nrhs, const mxArray *prhs[])
{
    double multiplier[NINPUT_ARGUMENTS]; /* input scalars */
    mxDouble *outMatrix;           /* output */
    
    /* check for correct number of arguments */
    if(nrhs!=NINPUT_ARGUMENTS) {
        mexErrMsgTxt("Incorrect number of inputs.");
    }
    if(nlhs!=1) {
        mexErrMsgTxt("One output required.");
    }
    
    for (int i = 0; i < NINPUT_ARGUMENTS; i++)
    {
        /* check that input arguments are real scalars */
        if( !mxIsDouble(prhs[i]) || mxIsComplex(prhs[i]) || mxGetNumberOfElements(prhs[i])!=1 )
            mexErrMsgTxt("Inputs must be real scalars.");
    }
    
    for (int i = 0; i < NINPUT_ARGUMENTS; i++)
        multiplier[i] = mxGetScalar(prhs[i]); /* obtain the value of the scalar inputs  */
    
    /* make the output matrix */
    plhs[0] = mxCreateDoubleScalar(0);
    
    /* obtain pointer to the real data (in the output) */
    outMatrix = mxGetDoubles(plhs[0]);
    
    /* call MATLAB_main */
#if NINPUT_ARGUMENTS == 1
    outMatrix[0] = MATLAB_main(multiplier[0]);
#elif NINPUT_ARGUMENTS == 2
    outMatrix[0] = MATLAB_main(multiplier[0],multiplier[1]);
#elif NINPUT_ARGUMENTS == 3
    outMatrix[0] = MATLAB_main(multiplier[0],multiplier[1], multiplier[2]);
#elif NINPUT_ARGUMENTS == 4
    outMatrix[0] = MATLAB_main(multiplier[0],multiplier[1], multiplier[2], multiplier[3]);
#elif NINPUT_ARGUMENTS == 5
    outMatrix[0] = MATLAB_main(multiplier[0],multiplier[1], multiplier[2], multiplier[3], multiplier[4]);
#elif NINPUT_ARGUMENTS == 6
    outMatrix[0] = MATLAB_main(multiplier[0],multiplier[1], multiplier[2], multiplier[3], multiplier[4], multiplier[5]);
#elif NINPUT_ARGUMENTS == 7
    outMatrix[0] = MATLAB_main(multiplier[0],multiplier[1], multiplier[2], multiplier[3], multiplier[4], multiplier[5], multiplier[6]);
#endif
}