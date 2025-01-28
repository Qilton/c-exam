//stdio: standard input output
#include <stdio.h>
//Main Function
int main(){
    //Initializing Variables: If u want to use any variable u need to first initialize it. You can store values in variables
    int a,b;
    //Printf is used to print the message on the screen
    printf("Enter Two Numbers");
    //Scanf is used to take input from the user
    scanf("%d %d", &a, &b);
    //Average of two numbers
    int avg=(a+b)/2;
    //%d is used to print the integer value
printf("Average of %d and %d is %d", a, b,avg);
 }