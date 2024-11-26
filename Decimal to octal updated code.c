#include<stdio.h>
int main()
{
	int n,oct=0,k=1,rem;
	printf("Enter a decimal number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%8;
		oct=rem*k+oct;
		k=k*10;
		n=n/8;
	}
	printf("The Octal number is:%d\n",oct);
	return 0;
}