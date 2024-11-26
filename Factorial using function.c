//Name:Archisman Das,Stream:Information Technology,Roll no:17,University Roll No:10900220058//
#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
 	int num;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&num);
    if(num<0)
    printf("No Factorial for negative number");
    else
    printf("\nFactorial of a Given Number is: %d ",fact(num));
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    if(n==0)
    return 1;
    else
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}