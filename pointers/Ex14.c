#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int * const const_p= &num1;
	const int * p_to_const = &num2;
	const int * const const_p_to_const = &num3;

//Constant Pointer example

    // Assign 10 to num1 using pointer 
    // Modification of value pointed by pointer is allowed 
    *const_p = 10; 
 
    // Re-assignment of constant pointer 
    // Modification of pointer value is not allowed 
   // const_p = &num2; // Uncomment this line to see the Error 
 
    printf("Num1 = %d\n", num1); 
    printf("Num1 = %d\n", *const_p); 


//Pointer to an Constant example
    num2 = 50;
    //Error: Since the value is constant 
//    *p_to_const = 30; //Uncomment this line to see the error
    printf("Value of num2 is %d\n", *p_to_const);
    //*p_to_const = 100; // Error: Ucomment to view the error
    p_to_const = &num1;  // Works: Since pointer is not constant
    num1 = 50; //Works, // You can still modify the pointed value directly 



//Constant Pointer to Constant 
    // Error // Modification of value pointed by pointer is also not allowed // Re-assignment of value to ptr 
    //const_p_to_const = &num3; //uncomment to see the error
    //Error: Modification of value pointed by a pointer to constant
    //*const_p_to_const = 50;  //uncomment to see the error
    num3 = 100;
    printf("Value of num3 is %d\n",*const_p_to_const );
}

