//Name:Archisman Das,Stream:Information Technology,Section:D,Class Roll No:17,University Roll No:10900220058//
#include<stdio.h>
#define row 2
#define col 2
int main(){
	int i,j,a[row][col],b[row][col],c[row][col],n;
	printf("Enter the elements for a matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements for b matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			c[i][j]=a[i][j]+b[i][j];
}
printf("The matrix c is:\n");
for(i=0;i<row;i++)
 		{
 			for(j=0;j<col;j++)
 				printf("%3d",c[i][j]);
 					printf("\n");
 				}
 				printf("\n");
	return 0;
}
	
	