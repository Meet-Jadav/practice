//program to perform multiplication without using * oprator.
#include <stdio.h>
int main (){
    int n,x,z;
    printf ("Enter your no :");
    scanf ("%d",&n);
    printf ("Enter your multiplication degit:");
    scanf ("%d",&x);
    z=n;
    for (int i=1;i<=x-1;i++){
        n=n+n;
    }
    printf ("%d x %d = %d",z,x,n);
    return 0;
}