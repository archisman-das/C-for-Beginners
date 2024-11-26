// Name:Archisman Das,SEC-D,Roll-17,University roll-10900220058 //
#include<stdio.h>
void fibo(int);
void main() 
{
   int n;    
   printf("\nEnter a number of  terms\n");
   scanf("%d",&n);
   fibo(n);
}
void fibo(int n)
{
   int i,c=0;
   int a=0;
   int b=1;
    printf("Fibonacci series for %d terms:\n",n);
   	printf("%d\t",a);
  	printf("%d\t",b);
   for(i=3;i<=n;i++)
   {
    	c=a+b;
    	printf("%d\t ",c);
        a=b;
        b=c;
    }
   printf("\t");
}
