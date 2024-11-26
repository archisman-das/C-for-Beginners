// Name:Archisman Das,SEC-D,Roll-17,University roll-10900220058 //
#include<stdio.h>
#include<conio.h>
#define row 4
#define col 4
int main()
{
 int a[row][col],i,j;
 printf("enter the values \n");
 for(int i=0;i<row;i++)
   {
   	 for(int j=0;j<col;j++)
   	    {
   	 	 scanf("%d",&a[i][j]);
		}
	}
   printf("\n The array is = \n");
   for(int i=0;i<row;i++)
   {
   	 for(int j=0;j<col;j++)
   	    {
   	 	 printf("%3d",a[i][j]);
		}
		printf("\n");
   }
  printf("The pattern is \n");
  for(int i=1;i<(row-1);i++)                                   
    {
	for(int j=1;j<(col-1);j++)
            {
            	a[i][j]=0;
    	 }
	}
	for(int i=0;i<row;i++)                                     
   {
   	 for(int j=0;j<col;j++)
   	    {
   	 	    printf("%3d",a[i][j]);
		}
		printf("\n");
   }
return 0;
}
