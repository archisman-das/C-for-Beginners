//Name:Archisman Das,Roll No:17,Section:D,Stream:IT,University Roll No:10900220058//
#include<stdio.h>
int main(){
	float fahrenheit,celsius;
	printf("Enter temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("%.2f fahrenheit=%.2f celsius",fahrenheit,celsius);
	return 0;
}