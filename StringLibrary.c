/* Sting length: */
/* 	- Determines the number of bytes in a string */
/* 	- Takes as argument the string to be tested. */
/* 	- Return snumber of bytes in stiring up to and excluding the first null */
/* 		-size_t is a data type, usually aliased to unsigned short.  */
/*  */
/* String Copy: */
/*  */
/* char *strcpy(char *dest, const char *src) */
/* 	- Must be used to assign a string variable  */
/* 	- Copies a source string into a destination string */
/* 	- Takes dest as the destination of the copy */
/* 	- Takes src as the source string to be copied into dest, up to and including the first null */
/* 	- Does not change src */
/* 	- Overwrites the contents of dest */
/* 	- Null terminates the dest string */
/* 	- Returns the new value of dest */

#include <stdio.h>
#include <string.h> //This will need to be included 

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

	/* String compare is used in this case because you cannot simple initialize one string to another.  */
	strcpy(newStr, inStr1);		
	newStr[0] = 'J';
	printf("%s\n", newStr); 	
	
	/* Sting compare will return an int. It will determine wehter S1 and S2 are identical (that is that the strings have the same content. Or which one is lexically or alphebatically smaller.) 0 means that the Strings are identical. A negative value means that the s1 is less than s2 and a positive value means that s1 is greater than s2.*/
	
	/*Sprintf is identical to printf except that instead of printing to the screen it dumps to a string destination.*/


	printf("We both say: %s %s\n", strcat(inStr1, newStr), inStr2);

	sprintf(bigStr, "We now say %s %s", inStr1, inStr2);
	printf("%s\n", bigStr);



	return 0;
}

