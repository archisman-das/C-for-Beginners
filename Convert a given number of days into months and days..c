//Name:Archisman Das,Class Roll No:17,Section:D,Stream:IT,University Roll No:10900220043//
#include<stdio.h>
int main(){
	int d,month,day;
	printf("Number of days are given:\n");
	scanf("%d",&d);
	month=d/30;
	day=d%30;
	printf("%d days=%d month and %d day",d,month,day);
	return 0;
}