/*to read n employee’s details like name, employee id, and Basic salary
using the structure and then print the entered values. (Use an array of structures)*/
#include<stdio.h>

struct employee
{
	char name[100];
	int emp_id;
	float basic_salary;
};

int main()
{
	struct employee e[10];
	int n;
	int i;
	int dummy;

	printf("Enter the number of employees:");
	scanf("%d",&n);
	

	for (i=0; i<n; i++)
	{
		printf("Enter name of employee %d:",i+1);
		scanf(" %[^\n]",e[i].name); //will accept string up to enter key, including spaces in between.
		printf("Enter employee id of employee %d:",i+1);
		scanf("%d",&e[i].emp_id);
		printf("Enter basic salary of employee %d:",i+1);
		scanf("%f",&e[i].basic_salary);
	}

	printf("\nEntered employee details are:\n");
	for (i=0; i<n; i++)
	{
		printf("Name of employee %d is %s\n",i+1, e[i].name);
		printf("Employee id of employee %d is %d\n",i+1, e[i].emp_id);
		printf("Basic salary of employee %d is %f\n",i+1, e[i].basic_salary);
		printf("\n");
	}


}