#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);

     str[strcspn(str, "\n")] = '\0';


    for(int i=0;i<strlen(str)/2;i++){
        if(str[i]!=str[strlen(str)-i-1]){
            printf("It is not palindrome");
            return 0;
        }
    }
    printf("It is palindrome");

}