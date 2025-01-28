#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of integers:\n ");
    scanf("%d", &n);
    int X[20];
    printf("Enter the integers\n");
    for(int i=0;i<n;i++){
        scanf("%d",&X[i]);
    }
for(int i=0;i<n;i++){
    printf("%d\n",X[i]);
}
    int max=X[0];
    int min=X[0];
    for(int i=0;i<n;i++){
        if(X[i]>max){
            max=X[i];
        }
        if(X[i]<min){
            min=X[i];
        }
    }
         printf("Max:%d\n",max);
       printf("Min:%d",min);
    }
   