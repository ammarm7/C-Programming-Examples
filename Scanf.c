/*The problem with scanf is it reads up untill the dillimiter (basically any blank space or new line. So if we entered a sentence in the example below it would not have worked.*/


#include <stdio.h>

int main()
{
	char myStr[10];


	printf("Please enter a string: ");
	scanf("%s", myStr); //Since array names are refrences to their mem pos its all good
	
	printf("You said: %s\n", myStr);

	return 0;

}
