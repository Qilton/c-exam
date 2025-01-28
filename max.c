#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Three Numbers");
    scanf("%d %d %d", &a, &b, &c);
    //We are taking a as maximum number
    int max=a;
    //If b is greater than a then b will be the maximum number
    if(b>a){
        max=b;
    }
    //If c is greater than max then c will be the maximum number
    if(c>max){
        max=c;
    }
    printf("The maximum number is %d", max);
    return 0;
}