#include <stdio.h>

int main()
{
	char myStr[10];

	printf("Please enter a string: ");
	scanf("%s", myStr);	//This needs a pointer but its all good because arrays names refer to memory addresses by default

	printf("You said: %s\n", myStr);


	return 0;
}


