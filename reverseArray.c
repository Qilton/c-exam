#include <stdio.h>
int main(){

    int N;
    //No. of digits in array
    printf("No. of digits in array");
    scanf("%d",&N);

    //We know array cant be greater than 10 so we took 10 as the limit
    int X[10],Y[10];
    

    //Process to input an array
    printf("Enter nos.");
    for(int i=0;i<N;i++){
        //We just initialize the nos in the adresses of the array one by one
        scanf("%d",&X[i]);
    }
    
    //The reversing process
    for(int i=0;i<N;i++){
        Y[i]=X[N-1-i];
    }

    
    printf("Reversed Aray:\n");
     for (int i = 0; i < N; i++) {
        printf("%d ", Y[i]);
    }
}