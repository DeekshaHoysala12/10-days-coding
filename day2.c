#include <stdio.h>     

int main()
{
    int length, i;
    int arr[length];
    printf("Enter the Array Size : ");
    scanf("%d", &length);
    printf("Enter the Array: ");
    for(i=0; i<length; i++)
    { 
        scanf("%d", &arr[i]);
    }
    
     printf("Reverse Array: ");
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }   

   return 0;
} 
