
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {1,2,3,4,100, 256, 300};
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
    
    printf("%d", arr_sumEven);  // printing the output

    return 0;
}
