#include <stdio.h>
int main(){
    int a,d,N;
    printf("Enter first term,common difference,Nth term");
    scanf("%d %d %d",&a,&d,&N);
    int ans=a;
    for(int i=0;i<N;i++){
        ans=ans+d;
    }
    printf("Nth term:%d",ans);
}