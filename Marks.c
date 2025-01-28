#include <stdio.h>
int main(){
    int m;
    printf("Enter Marks");
    scanf("%d",&m);
    if(m<=60){
        printf("D");
    }
    else if(m>60 && m<=70)
    {
        printf("c");
    }
    else if(m>70 && m<=90){
        printf("B");
    }
    else{
        printf("A");
    }
}