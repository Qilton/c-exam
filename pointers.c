#include <stdio.h>
int main(){
    int a=2;
    int b=4;
    int *pA=&a;
    int *pB=&b;
    printf("a+b=%d",*pA+*pB);
}