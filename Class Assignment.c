//Name:Archisman Das,Stream:Information Technology,Section:D,Class Roll No:17,University Roll No:10900220058//
#include<stdio.h>
int main(){
	char str[10000];
	int i=0,c=0,space=0;
	printf("Enter string:\n");
	gets(str);
	printf("The Output string is :\n");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==32)
		space=i;
	}
	printf("%c.",str[0]);
	for(i=0;i<space;i++)
	{
		if(str[i]==32)
		{
			printf("%c.",str[i+1]);
			c=i;
		}
	}
	for(i=space+1;str[i]!='\0';i++)
	printf("%c",str[i]);
	return 0;
}