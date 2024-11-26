#include<stdio.h>
int sum (int x,int y); //Function Declaration//
int main()
{
	int a,b,c;
	printf("Enter the numbers:\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b); //Function Call//
	printf("The sum of %d and %d is %d",a,b,c);
	return 0;
}
int sum (int x,int y) //Function Definition//
{
	return (x+y);
}