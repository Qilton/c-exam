#include <stdio.h>
int main(){
    int n,s=0;
    printf("Enter no.");
    scanf("%d",&n);
    //Here we are doing i<n because we dont want 28 as a factor. 
    for(int i=1;i<n;i++){
        if(n%i==0){
            //Same divisors logic. Instead of printing we are adding the divisors to the sum
            s=s+i;
            printf("%d\n",s);
        }
    }
    if(s==n){
        printf("This is a perfect no.");
    }
    else{
        printf("This is not a perfect no.");
    }
}