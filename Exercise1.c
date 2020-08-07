/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex1(char *testcase){
	//your codes here
   int l = strlen(testcase);
   if (l == 0) {
      fprintf(stderr, "empty string\n");
      return;
   }
   if (l > 4) {
      fprintf(stderr, "Length more than 4 is not supported\n");
      return;
   }
    char *single_digit[] = { "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
 
    char *tens_place[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
    char *tens_power[] = {"hundred", "thousand"};
   printf("\n%s: ", testcase);

   if (l == 1) {
      printf("%s\n", single_digit[*testcase - '0']);
      return;
   }
   while (*testcase != '\0') {
      if (l >= 3) {
         if (*testcase -'0' != 0) {
            printf("%s ", single_digit[*testcase - '0']);
            printf("%s ", tens_power[l-3]); 
         }
         --l;
      }
      else {
         if (*testcase == '1') {
            int sum = *testcase - '0' + *(testcase + 1)- '0';
            printf("%s\n", tens_place[sum]);
            return;
         }
         else if (*testcase == '2' && *(testcase + 1) == '0') {
            printf("twenty\n");
            return;
         }
         else {
            int i = *testcase - '0';
            printf("%s ", i? tens_multiple[i]: "");
            ++testcase;
            if (*testcase != '0')
               printf("%s ", single_digit[*testcase - '0']);
         }
      }
      ++testcase;
   }
}

int main(int argc, char *argv[]) {
	char *testcase = atoi(argv[1]);
	
	ex1(testcase);
		
	return 0;
}
