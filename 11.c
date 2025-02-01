//program to input 4 no. and do some arithmatic process on it .
#include <stdio.h>
int main (){
    float a,b,c,d;
    printf ("Enter your a:");
    scanf("%f",&a);
    printf ("Enter your b:");
    scanf("%f",&b);
    printf ("Enter your c:");
    scanf("%f",&c);
    printf ("Enter your d:");
    scanf("%f",&d);
    printf ("(a+b)*(c/d) = %f \n",(a+b)*(c/d));
    printf ("(a+b)*c/d = %f \n",(a+b)*c/d);
    printf ("a+(b*c)/d = %f",a+(b*c)/d );
    return 0;
}