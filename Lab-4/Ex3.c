#include<stdio.h> 
 
int main() 
{ 
int a,b,c, choice; 
 
printf("Enter a\n"); 
scanf("%d",&a); 
printf("Enter b\n"); 
scanf("%d",&b); 
printf("1: Addition 2: Sub 3: Mul 4: Div\n"); 
printf("Enter your operator/choice\n"); 
scanf("%d",&choice); 
 
switch(choice)  //syntax: switch(expression/variablename) {case 1, case1......, default} 
 
{ 
	case 1: c=a+b;  //syntax: case value1:  statements; break; 
		printf("The result is=%d\n",c); 
		break; 
	case 2: c=a-b;  //syntax: case value2:  statements; break; 
		printf("The result is=%d\n",c); 
		break; 
	case 3: c=a*b;  //syntax: case value3:  statements; break; 
		printf("The result is=%d\n",c); 
		break; 
	case 4:	c=a/b;   //syntax: case value4:  statements; break; 
		printf("The result is=%d\n",c); 
		break; 
	default: 
		printf("invalid choice\n");  //syntax: default : statemnets; 
} 
 
printf("program is done!!\n"); 
} 
 