#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    // % is used to find the remainder (If a number is divided by 2 and the remainder is 0 then the number is even otherwise it is odd)
    if(a%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}