//Taking multiple students name as input and print the same
#include <stdio.h>

int main()
{
	char names [100][100];
	int i, j;
	int count;
	char dummy;

	printf("Enter the number of students:");
	scanf("%d", &count);
	scanf("%c",&dummy);   //to igonre the "enter" typed after the previous output
	printf("Enter all the names:\n");
//Reading values from user
	for(i=0;i<count;i++) {
		gets(names[i]);
	}

//printing the name list
	for(i=0;i<count;i++) {
		puts(names[i]);
	}
}