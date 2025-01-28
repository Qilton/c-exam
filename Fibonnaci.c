#include <stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter the no. of terms");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i<=1){
            //This is so that the first two terms 0 and 1 print as it is 
            printf("%d",i);
        }
        else{
            //We add 0 and 1 to c since this is how fibonacci works
            c =a+b;
            a=b;
            b=c;
            
        printf("%d",c);
        }
    }

}