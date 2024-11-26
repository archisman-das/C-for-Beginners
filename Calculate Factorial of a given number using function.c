// Name:Archisman Das,SEC-D,Roll-17,University roll-10900220058 //
#include<stdio.h>
int factorial(int n);
int main()
{
	int a,p;
	printf("Enter a number:\n");
	scanf("%d",&a);
	p=factorial(a);
	if(a<0)
	printf("No factorial for negative numbers");
	else
	printf("factorial of %d is %d",a,p);
}
int factorial(int n)
{
	int i;
	int fact=1;
	if(n==0)
	return 1;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}