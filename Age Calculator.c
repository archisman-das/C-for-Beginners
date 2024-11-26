#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ 
  int a,b,c,p,q,r,d1,d2,d3,days,year,mon,day,x,y;
  printf("enter current date dd/mm/yr \n");
  scanf("%d%d%d",&p,&q,&r);
  printf("enter ur date of birth by dd/mm/yr \n ");
  scanf("%d%d%d",&a,&b,&c);
  d1= (((q-1)*30)+p);                   // days in current year //
  d2=(((12-b)*30)+(30-a));              //days in  birth //
  y=r-c;                                //just bcoz for same year r-c-1 will be negative //
  if(y>=1)
  {
         d3=((y-1)*365);               // years btwn birth and today //
         days=d1+d2+d3;                // total no of days spent by me //
            year=(days/365);
             printf(" DOB is %d year",year);
            x=(days%365);
        	mon=x/30;
          	day=x%30;
          	printf(" %d month %d days",mon,day);
  }
   else
     {
	   day=p-a; 
        printf("%d days ",day);  
     }  
  return 0;  	  
}