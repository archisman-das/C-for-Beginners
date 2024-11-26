#include<stdio.h>
int main(){
	int fact=1,i,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n<0)
		printf("No Result Found");
	else
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
	printf("The factorial of %d = %d",n,fact);
}
	return 0;
}