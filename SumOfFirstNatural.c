#include <stdio.h>
int main(){
    //We need to initialize sum as 0 or else c will give a random garbage value
    int n,sum=0;
    printf("Enter till where u want sum");
    scanf("%d",&n);
    //for loop is basically for looping. The first argument(i=0) is the initial value of i(from where the loop wil start). The second argument(i<=n) states till where should i go, here we need to go till n,The third argument(i++) just states that increase the value of i after each loop. Once i=n the loop will break. 
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    //Sum is outside the loop because we dont want to print it at every loop. We only need the final result
    printf("sum:%d",sum);
}