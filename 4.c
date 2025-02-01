// Program to convert ruppes into paisa.
#include <stdio.h>
int main (){
    float r;
    printf ("Enter your amount in ruppes :");
    scanf ("%f",&r);
    float p = r*100;
    printf ("Your amount in paisa is = %f",p); 
    return 0;
}