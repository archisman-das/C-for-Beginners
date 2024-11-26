//Name:Archisman Das,Stream:Information Technology,Section:D,Class Roll No:17,University Roll No:10900220058//
#include<stdio.h>
int main()
{
		char str1[30],str2[30];
       	int i=0,temp = 0;
		printf("Enter the string1 value: ");
       	gets(str1);
		printf(" Enter the String2 value: ");
       	gets(str2);
       	{
		for(i=0; str1[i]!='\0'; i++)
       {
              if(str1[i] == str2[i])
              temp = 1;
              else
              temp = 0;
       }
   }
	if(temp == 1)
    printf("Both strings are same.");
 	else
 	printf("Both string not same.");
	return 0;
}