#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	int marks[4];
};
int main()
{
	int i,j;
	struct student a[3];
	for(i=0;i<3;i++)
	{
		printf("Enter the details for student %d :\n",i+1);
		printf("Enter the name,roll no :\n");
		scanf("%s\n%d",a[i].name,&a[i].rollno);
	for(j=0;j<4;j++)
	{
		printf("Enter the marks for subject %d\n",j+1);
		scanf("%d",&a[i].marks[j]);
	}
}
	for(i=0;i<3;i++)
	{
		printf("Data of students:\n");
		printf("Name:%s\nRoll no:%d\nMarks",a[i].name,a[i].rollno);
		for(j=0;j<4;j++)
		printf("%d\t ",a[i].marks[j]);
		printf("\n");
		
	}
	return 0;
}