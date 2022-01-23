#include <stdio.h>

double calc_pow(unsigned int n); //function prototype call here becasue function declare below main funcion

int main()   // main function
{
    calc_pow(1023); // function call with given number
    
}

double calc_pow(unsigned int n)   // functiom make here with one inout value
{
    int i= 1;                     // initialize parameter for making loop
    double mult = 2;              // double varibale declare because we want to send double 
    double result;                // double varibale declare because we want to send double
    if (n == 0)   // if input zero then print it 1.
    {
        printf("result for zero = %d", 1);
        return 0;
    }
    else             // if not input 1.
    {
        while(i < n)    //condition will run untill given input, <, because i start with 1.
        {
            result = 2 * mult;     // here 2 multiply n times
            mult = result;         // result updated in mult     
            i++;                   // increment i with 1 until the condition invalid 
            
        }
        printf("multiplication of 1023 times of 2 = %g", mult );   // here print the result, %g for double value
        
        return mult;    // return the result to main function
        
    }
    
}
