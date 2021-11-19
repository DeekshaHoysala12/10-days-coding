#include <stdio.h>     

int main()
{
    int length, i;
    int arr[length];
    printf("Enter size of the array: ");
    scanf("%d", &length);
    printf("Enter elements in array: ");
    for(i=0; i<length; i++)
    { 
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements ");
   
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
     printf("\n");
     printf("\nArray elements in reverse order ");
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }   

   return 0;
} 
