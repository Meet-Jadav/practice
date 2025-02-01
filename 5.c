// Program to convert inches into cm.
#include <stdio.h>
int main (){
    float in;
    printf ("Enter your distance in inches:");
    scanf ("%f",&in);
    float cm = in*2.54;
    printf ("Your distance in cm is = %f",cm); 
    return 0;
}