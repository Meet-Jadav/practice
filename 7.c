// program to shift given data by two bits 
#include <stdio.h>
int main (){
    int n;
    printf ("Enter your no :");
    scanf ("%d",&n);
    n = n << 2;
    printf ("Your new no is %d",n);
    return 0;
}