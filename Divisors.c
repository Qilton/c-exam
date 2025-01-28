#include <stdio.h>
int main(){
    int n;
    printf("Enter your No.");
    scanf("%d",&n);
    //Will start the loop from 1 since anything%0 will give error
    //The code will go till n since n will also be a factor of n
    for(int i=1;i<=n;i++){
        //Whenever n%i==0 it means that n is divisible by i so we can just print i
        if(n%i==0){
            printf("%d\n",i);
        }
    }

}