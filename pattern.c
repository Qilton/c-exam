#include <stdio.h>
int main(){
    int row=5;

    // for(int i=1;i<=row;i++){
    //     for (int j=0;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for(int i=1;i<=row;i++){
        for(int j=row-i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
}