#include <stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    //Edge Case for 1 and 2 since they are not prime
    if(n<2){
        printf("This is not a prime no.");
    }

    //We run the loop from 2 to n-1 basically because it leaves 1 and n. If n is divisible by any no. except 1 and n its a prime no.
    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("This is not a prime no.");
            //Should end the program after printing prime

            return 0;
        }
    }
    printf("This is a prime no.");
    return 0;
}