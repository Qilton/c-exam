#include <stdio.h>
int main(){
    // FILE *pF=fopen("poem.txt","a");
    // fprintf(pF, "Roses are Red\nViolets are Green");
    // fclose(pF);

    FILE *pF2=fopen("poem.txt","r");
    char buffer[255];
    while( fgets(buffer,255,pF)!=NULL){
    printf("%s",buffer);
    }
    fclose(pF2);
}