#include <stdio.h>
int factorial(int);
main()
{   int n=6,f;
    f=factorial(n);
    printf("%d!=%ld\n",n,f);
}
int factorial(int n)
    {
       if(n==0)
       return 1;
       else
       return(n*factorial(n-1));
    }
