#include<stdio.h>
int main()
{
 int i,j,r,c,a[5][5],b[5][5];

 printf("Enter Number of r and c\n");
 scanf("%d %d",&i,&j);
 printf("\n Enter the Array Elements \n");
 for(r=0;r<i;r++)
  {
   for(c=0;c<j;c++)
    {
      scanf("%d",&a[r][c]);
    }
  }
 for(r =0;r<i;r++)
  {
   for(c=0;c<j;c++)
    {
      b[c][r]= a[r][c];
    }
  }

 printf("\n Transpose Matrix Elemnts are: \n");
 for(r=0;r<j;r++)
  {
   for(c=0;c<i;c++)
    {
      printf("%d \t ", b[r][c]);
    }
    printf("\n");
  }

return 0;
}