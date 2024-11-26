#include<stdio.h>
int main()
{
    int a[100],n,x,i,beg,end,mid,flag=0;
 
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Please enter array elements:");
    for(i=0; i<n; i++)
    {
        
        scanf("%d",&a[i]);
    }
    printf("Enter element to be search:");
    scanf("%d",&x);
 
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==x)
        {
            printf("Element found at %d position",mid + 1);
            flag=1;
            break;
        }
        if(a[mid]>x)
            end=mid-1;
        else
            beg=mid+1;
    }
    if(!flag)
        printf("No such element is found");
 	return 0;
}