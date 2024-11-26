#include<stdio.h>
#include<string.h>
struct cricket{
 		char teamname[10],playername[10];
 		float batavg;
 		};
int main()
{
	struct cricket a[5];
	int i,p;
	float max=0.0;
	for(i=0;i<3;i++)
{
	printf("Enter team name \n");
    scanf("%s",a[i].teamname);                       //	gets(a[i].teamname);
	printf("Enter player name  \n");
	scanf("%s",&a[i].playername);                   //gets(a[i].playername);  
	printf("Enter batting average \n");
	scanf("%f",&a[i].batavg);
	printf("\n");
}
printf(" The player with highest batting average \n");
for(i=0;i<3;i++)
{
	if(a[i].batavg > max)
	    {
	    	 max=a[i].batavg;
	    	 p=i;
		}
 }
 
printf("%s\t%s\t%0.2f",a[p].teamname,a[p].playername,max);
	 	 
  return 0;
}

