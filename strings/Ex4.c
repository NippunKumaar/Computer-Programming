//Code to demonstrate string internal functions

#include <stdio.h>
#include <string.h>

int main()
{
	char string1[100], string2[100], string3[100];
	int len1, len2;
	int i;
	printf("Enter String1:");
	gets(string1);			//Taking input using gets
	printf("Enter String2:");
	gets(string2);	

//Printing length of string1 and string2 using strlen
	len1 = strlen(string1);
	len2 = strlen(string2);
	printf("Length of string1 is %d\n", len1);
	printf("Length of string2 is %d\n", len2);

//Copying string1 content to string3 using inbuilt funciton

	strcpy(string3, string1);
	printf("String3-");
	puts(string3);

//Copying string2 content to string3 using for loop

	for (i=0; string2[i]!= '\0'; i++) {
		string3[i] = string2[i];
	}
	string3[i] = '\0';
	printf("String3 after copying String2\n");
	puts(string3);

// Comparing string2 and string3 using strcmp() function
	if(! strcmp(string3, string2))
		printf("string3 and string2 are equal\n");
	else
		printf("string3 and string2 are not equal\n");

// Concatinating string1 and string3 and store the result in string1 using strcat() function
	strcat(string1, string3);
	printf("Data in string1 after contcatination:");
	puts(string1);
}