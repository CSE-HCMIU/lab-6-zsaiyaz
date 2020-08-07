/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: "valid"        |
| Input: "{[)}"          |
| Output: "invalid"      |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,top = -1;
char stack[100];
int ex5(char *testcase){
	for (i = 0; testcase[i] != '\0';i++)
	{
	if (testcase[i] == '(')
	{
			stack[top] = testcase;
	        top++;
		}
		else if (testcase[i] == ')')
		{
			if (top == -1)
        	{
	        	printf("invalid\n");
		        exit(0);
	        }	
	        else
	        {		
		        top--;
	        }
		}
    }
    if (top == -1)
		printf("\nvalid\n");
	else
		printf("\ninvalid\n");

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
    char *testcase1 ="[{()}]";
    char *testcase2 ="([)]";

    ex5(testcase1);
    ex5(testcase2);
		
	return 0;
}
