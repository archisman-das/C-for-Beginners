#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,n;
	printf("Enter the terms:\n");
	scanf("%d",&n);
	printf("The pattern:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				printf("1");
				
			}
			else
			{
				printf("0");
				
			}
		
		}
			printf("\n");
			continue;
		getch();
	}
	return 0;
}