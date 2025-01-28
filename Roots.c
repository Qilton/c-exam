#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    double determinant,root1,root2;
 printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    determinant=b*b-4*a*c;
    if(determinant>0){
        root1=(-b+sqrt(determinant))/2*a;
        root2=(-b-sqrt(determinant))/2*a;
        printf("Two distinct roots: %lf, %lf",root1,root2);
    }
    else if(determinant=0){
        root1=-b/2*a;
        printf("Two equal roots:%lf",root1);

    }
    else{
        printf("Two Imaginary Roots");
    }
    
}