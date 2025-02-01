// program to detrmine speed of car.
#include <stdio.h>
int main (){
   float d,t;
   printf ("Enter your traveled distance in meater :");
   scanf ("%f",&d);
   printf ("Enter your time taken in secoends :");
   scanf ("%f",&t);
   float speed = d/t;
   printf ("Your speed of car in m/s is %f ",speed);
    return 0;
}