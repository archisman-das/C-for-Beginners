#include<stdio.h>
int main()
{
	int rem,i,n,temp,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	rem=n%10;
	sum=sum+rem*rem*rem;
	n=n/10;	
	}
	if(sum==temp)	
	printf("Armstrong");
	else
	printf("Not Armstrong");
	return 0;
}