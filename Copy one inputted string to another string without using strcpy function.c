#include <stdio.h>
int main()
{
	char str1[30], str2[30], i=0;
	printf("string str1 : %s\n");
	scanf("%s",str1);
	while( str1[i] != '\0') 
	{
		str2[i] = str1[i];
		i++;
	}

	str2[i] = '\0';
	printf("String str2 : %s",str2);

	return 0;
}
