#include<stdio.h>
#include<string.h>
int main()
 {
 	struct{
 		char teamname[10],playername[10];
 		float batavg;
 		
	 }cricket[5];
int i,p;
float max=0.0;
for(i=0;i<3;i++)
{
	printf("Enter team name \n");
    scanf("%s",&cricket[i].teamname);                       //	gets(cricket[i].teamname);
	printf("Enter player name  \n");
	scanf("%s",&cricket[i].playername);                   //gets(cricket[i].playername);  
	printf("Enter batting average \n");
	scanf("%f",&cricket[i].batavg);
	printf("\n");
}
printf(" The player with highest batting average \n");
for(i=0;i<3;i++)
{
	if(cricket[i].batavg > max)
	    {
	    	 max=cricket[i].batavg;
	    	 p=i;
		}
 }
 
printf("%s\t%s\t%0.2f",cricket[p].teamname,cricket[p].playername,max);
	 	 
  return 0;
}

