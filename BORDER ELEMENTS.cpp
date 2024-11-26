// Name:Archisman Das,SEC-D,Roll-17,University roll-10900220058 //
#include<stdio.h>
#include<conio.h>
const int row=3;
const int col=3;
int main()
 {
 
 int arr[row][col];
 int i,j;
 printf("enter the values \n");
 for(int i=0;i<row;i++)
   {
   	 for(int j=0;j<col;j++)
   	    {
   	 	 
			 scanf("%d",&arr[i][j]);
			 
		}
	
   }
   printf("\n The Array is = \n");
   for(int i=0;i<row;i++)
   {
   	 for(int j=0;j<col;j++)
   	    {
   	 	 
			 printf("%d\t",arr[i][j]);
			 
		}
		printf("\n");
   }
  printf("Only Border Elements are \n");
  for(int i=1;i<(row-1);i++)                                    //making under elements 0
    {
    	for(int j=1;j<(col-1);j++)
            {
            	arr[i][j]=0;
    	 
         	}
	}
	
   for(int i=0;i<row;i++)                                      // now print all elements including 0
   {
   	 for(int j=0;j<col;j++)
   	    {
   	 	    
			 printf("%d\t",arr[i][j]);
			 
		}
		printf("\n");
   }
return 0;
}
