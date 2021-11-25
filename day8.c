#include <stdio.h>

int main() {
    float n;
    int i,a[50];
    float pos_count=0,neg_count=0,zero_count=0;
    float pc,nc,zc;
    printf("enter the number of array elements\n");
    scanf("%f",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
            neg_count++;
        }
        else if(a[i]==0){
            zero_count++;
        }
        else if (a[i]>0){
            pos_count++;
        }
    }
    
    pc=pos_count/n;
    nc=neg_count/n;
    zc=zero_count/n;
    printf("%f\n",pc);
    printf("%f\n",nc);
    printf("%f\n",zc);
    
    return 0;
}
