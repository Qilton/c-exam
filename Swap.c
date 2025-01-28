#include <stdio.h>

void SwapWithTemporaryVariable(int a,int b){
    int c=a;
    a=b;
    b=c;
    printf("a:%d,b:%d",a,b);
}

void SwapWithoutTemporaryVariable(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
      printf("a:%d,b:%d",a,b);
}

void SwapWithXOR(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
      printf("a:%d,b:%d",a,b);
    
}

int main(){
    SwapWithXOR(2,5);
}