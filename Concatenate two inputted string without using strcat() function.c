//Name:Archisman Das,Stream:Information Technology,Section:D,Class Roll No:17,University Roll No:10900220058//
#include <stdio.h>
int main()
{
	char str1[30],str2[30],str3[70];
	int i = 0, j = 0;
	printf("\nFirst string:", str1);
	gets(str1);
	printf("\nSecond string:", str2);
	gets(str2);
	while (str1[i] != '\0') {
		str3[j] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i] != '\0') {
		str3[j] = str2[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	printf("\nConcatenated string is: %s", str3);
	return 0;
}
