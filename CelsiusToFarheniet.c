#include <stdio.h>
int main(){
    float c,f;
    printf("Enter temp in Farenheit:");
    scanf("%f",&f);
     c=((f-32)/9)*5;
    printf("Value is Celsius: %f",c);

}