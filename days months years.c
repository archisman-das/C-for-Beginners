#include<stdio.h>
int main(){
	int day,months,years;
	printf("Enter day:");
	scanf("%d",&day);
	months=day/30;
	printf("months=%d",months);
	years=day/365;
	printf("years=%d",years);
	return 0;
}