// program to determine if a person is eligeble to vote or not by age .
#include <stdio.h>
int main (){
    int n;
    printf ("Enter your age in year :");
    scanf ("%d",&n);
    (n>=18?printf("you can vote"):printf("You can't vote."));
    return 0;
} 