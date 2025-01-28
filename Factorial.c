#include <stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter The Number:");
    scanf("%d",&n);
    //Loop will go from 2(factorial is already initialized as 1) to the number we have got from the user and every loop The number will be multiplied to factorial
    //Lets suppose n=5
    //First Loop  i=2     factorial=factorial*i=1*2=2         
    //Second Loop i=3     factorial=factorial*i=2*3=6
    //Third Loop  i=4     factorial=factorial*i=6*4=24
    //Fourth Loop i=5     factorial=factorial*i=24*5=120
    //Fifth Loop  i=6 since the condition i<=n is no longer satisfies the loop will break
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    printf("Factorial:%d",factorial);
}