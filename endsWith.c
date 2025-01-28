#include <stdio.h>
#include <string.h>
int main(){
    //Inputting a string with 99 characters. The 100th term is the null terminator
    char str[100];
    printf("Enter String:");
    //Used to input multi line string
     fgets(str, sizeof(str), stdin);
    int dot=0,question=0;
    
    for(int i=1;i<strlen(str);i++){
        if(str[i]==' '){
            if(str[i-1]=='.'){
                dot++;
            }
            if(str[i-1]=='?'){
                question++;
            }
        }
        
    }
    printf("dots:%d",dot);
    printf("questionMark:%d",question);
}