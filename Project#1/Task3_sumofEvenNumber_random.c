
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array_size_random = 7;               // number of array size
    int arr[array_size_random],k;            // initilization  
    int size = sizeof(arr)/sizeof(arr[0]);   // calculate the size of array
   for(k=0;k<size;k++)
   {
       arr[k]=rand()%100;                    //Generate number between 0 to 99
   }
   
   printf("\nElements of the array::");      
   for(int m=0;m<size;m++)                    // print the array nElements
   {
       printf("\nElement number %d::%d", m, arr[m]);
   }
     
    
    //int arr[] = {1,2,3,4,100, 256, 300};
    int size_arr = sizeof(arr)/sizeof(arr[0]); // find out the size of array
    // initilization
    int i = 0;
    int arr_sumEven = 0;
    
    while(i < size_arr) // condition check
    {
        if (arr[i]%2 == 0) // even number calculation
        {
            arr_sumEven = arr_sumEven + arr[i];
            
        }
       
        i = i + 1;
        
    }
    
   printf("\nsummation of even number: %d", arr_sumEven);  // printing the output

    return 0;
}
