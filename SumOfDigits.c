#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter No.");
    scanf("%d",&n);
    while(n>0){
        //FOr any digit n%10 will always give last digit 
        sum=sum + n%10;
        //n/10 on the other hand will remove that last digit from the no.
        n=n/10;
        //The Loop will run only till n>0. When you will divide the last remaining digit with 10,you will get 0 so the loop will break
    }
    printf("%d",sum);
}