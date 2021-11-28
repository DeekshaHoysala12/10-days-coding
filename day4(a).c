#include <stdio.h>

int main() {
    int a[100],key,n,i,index;
    printf("Enter the Array Size : ");
    scanf("%d",&n);
    printf("Enter the Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            index=i;
            break;
           
        }
        
    }
    if(index==i){
        printf("The element is present in index %d",i);
    }
    else{
            printf("The entered element not found");
        }
    
    
    return 0;
}
