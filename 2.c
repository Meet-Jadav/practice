//program to find area of right angle tringle.
#include <stdio.h>
int main (){
    int b,h;
    printf ("Enter length of base:");
    scanf ("%d",&b);
    printf ("Enter length of hight :");
    scanf ("%d",&h);
    float Area = (0.5)*b*h;
    printf ("Your area of tringle is : %f",Area);
    return 0;
}