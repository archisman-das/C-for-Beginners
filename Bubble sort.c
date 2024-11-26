//Name:Archisman Das,Stream:Information Technology,Section:D,Class Roll No:17,University Roll No:10900220058//
#include<stdio.h>
int main(){
	int a[10],i,j,n,temp;
	printf("Enter the terms:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
	}
	printf("Sorted list in Ascending order is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}