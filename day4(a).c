#include <stdio.h>

int main() {
    int a[100],key,n,i,index;
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array elements are\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("Enter the key element to be found\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            index=i;
            break;
           
        }
        
    }
    if(index==i){
        printf("The entered element %d is found in %d index",key,i);
    }
    else{
            printf("The entered element not found");
        }
    
    
    return 0;
}
