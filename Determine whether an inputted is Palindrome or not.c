//Name:Archisman Das,Stream:Information Technology,Section:D,Class Roll No:17,University Roll No:10900220058//
#include<stdio.h>
#include<string.h>
int main(){
	char str1[30],str2[30];
	int i=0;
	printf("First string:\n");
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	if (strcmp(str1,str2) == 0)  
    printf("The string is a palindrome\n");
  else
    printf("The string isn't a palindrome\n");
	return 0;
}