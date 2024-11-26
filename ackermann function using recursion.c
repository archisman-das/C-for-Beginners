//Name:Archisman Das,Sec:D,Stream:IT,RollNo:17,University Roll No:10900220058//
#include<stdio.h>
int ackermann(int m, int n);
int main()
{
	int a,b;
	printf("Enter the numbers:\n");
	scanf("%d%d",&a,&b);
	if(a<0 && b<0)
	printf("No result for negative numbers.\n");
	else
	printf("Result is %d",ackermann(a,b));
	return 0;
}
int ackermann(int m, int n)
{
	if(m==0)
	return (n+1);
	else if(m>0 && n==0)
	return (ackermann(m-1,1));
	else if(m>0 && n>0)
	return (ackermann(m-1,ackermann(m,n-1)));
	
}
