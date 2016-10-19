#include <stdio.h>
#include <string.h>



#define MAX_STR 32


int main()

{
	char inStr1[MAX_STR];
	char inStr2[MAX_STR];
	char newStr[MAX_STR];
	char bigStr[MAX_STR];

	printf("Please enter two strings: ");
	scanf("%s %s", inStr1, inStr2);
	printf("You say: %s %s\n", inStr1, inStr2);

	strcopy(newStr, inStr1);	//Copying the instance of inStr1 to "newStr

	newStr[0] = 'J';		
	printf("%s\n", newStr);

	int strcmp(
	

	return 0;
}



