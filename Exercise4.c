/*
4. Input a string and remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: "this is an unformatted string"        |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex4(char *testcase){
	//your codes here
	   char blank[1000];
   int c = 0, d = 0;
   while (testcase[c] != '\0') {
      if (testcase[c] == ' ') {
         int temp = c + 1;
         if (testcase[temp] != '\0') {
            while (testcase[temp] == ' ' && testcase[temp] != '\0') {
               if (testcase[temp] == ' ') {
                  c++;
               }  
               temp++;
            }
         }
      }
      blank[d] = testcase[c];
      c++;
      d++;
   }
 
   blank[d] = '\0';
 
   printf("testcase after removing blanks\n%s\n", blank);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = "  this  is an   unformatted  string ";

	ex4(testcase);
		
	return 0;
}
