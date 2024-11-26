#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[2][2];
	int i,j,lar = a[0][0];
	printf("Enter the elements of array: ");
	for(i=0;i<2;i++)		//input elements
	{	for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	lar = a[0][0];
	for(i=0;i<2;i++)		//check of largest number
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]>lar)
				lar = a[i][j];
				
		}
	}
	printf("Largest number: %d",lar);		//display output
	return 0;
}