//program to do sum ,substraction,multiplication ,division. 
#include <stdio.h>
int main (){
    int a,b;
    printf ("Enter your first number:");
    scanf ("%d",&a);
    printf ("Enter your secoend number:");
    scanf ("%d",&b);
    float division = (a*1.0)/b;
    printf ("your sum is = %d \n",a+b);
    printf ("Your subtraction is = %d \n",a-b);
    printf ("Your multiplication is = %d \n",a*b);
    printf ("Your division is = %f ",division);
    return 0;
}