#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int word=0,sentence=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i] != '\0';i++){
        if(str[i]=='.'){
            sentence++;
        }
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            word++;
        }
    }
    printf("Sentences:%d",sentence);
    printf("Words:%d",word);
}