#include<stdio.h>
int main(){
	int i,j,k=0,n,p;
	printf("No of terms:");
	scanf("%d",&n);
	p=(n+1)/2;
	for(i=1;i<=n;i++)
	{
		
		
		i<=p?k++:k--;
		for(j=1;j<=n;j++)
		{
			if(j>=(p+1)-k && j<=(p-1)+k)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
		
		
	}
	return 0;
}