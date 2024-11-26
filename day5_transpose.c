//Name:Archisman Das,Stream:Information Technology,Section:D,Class Roll No:17,University Roll No:10900220058//
#include<stdio.h>
#define row 2
#define col 2
int main(){
	int a[row][col],b[row][col],i,j;
	printf("Enter the matrix a(%dX%d) :\n",row,col);
	for(i=0;i<row;i++)
		{
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
		}
			for(i=0;i<col;i++)
				for(j=0;j<row;j++)
					b[i][j]=a[j][i];
					printf("Transpose of Matrix is:\n");
					for(i=0;i<col;i++)
					{
						for(j=0;j<row;j++)
						printf("%3d",b[i][j]);
						printf("\n");
					}
					return 0;
				}
						
					