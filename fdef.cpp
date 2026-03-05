FUNCTION

-	is a subroutine that contains one or more C++ statements. 
-	each function has a name, and this name is used to call the function.

-	C++ function contains set of instructions enclosed by “{  }” which performs specific operation in a C++ program. 

USES OF C++ FUNCTIONS:
•	C++ functions are used to avoid rewriting same logic/code again and again in a program.
•	There is no limit in calling C++ functions to make use of same functionality wherever required.
•	We can call functions any number of times in a program and from any place in a program.
•	A large C++ program can easily be tracked when it is divided into functions.
•	The core concept of C++ functions are re-usability, dividing a big task into small pieces to achieve the functionality and to improve understandability of very large C++ programs.

Types of a Function:
1.	Pre-defined function
•	Ex. main(), pow (), sqrt ()
2.	User define function
Syntax:
–	Return_type functionName (parameter list)
{body}

SYNTAX:
•	Non value-returning functions
void function-name(parameter list)
{
 constant declarations
 variable declarations
 
 other C++ statements
} 

•	With Returning Value
int FindMax(int x, int y)
{ 
 int maximum;
 
 if(x>=y)
   maximum = x;
 else
   maximum = y;
 
 return maximum;
}
