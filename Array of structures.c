#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	int i;
	struct student a[3];
	for(i=0;i<3;i++)
	{
		printf("Enter the name,roll no and marks :\n");
		scanf("%s%d%f",a[i].name,&a[i].rollno,&a[i].marks);
	}
		for(i=0;i<3;i++)
		{
			printf("%s\n%d\n%f\n",a[i].name,a[i].rollno,a[i].marks);
		}
		return 0;
}