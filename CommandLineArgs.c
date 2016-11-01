#include <stdio.h>

/* The first argument is an int by convention it is always called argc, including how many words did the user type when they launched the program. It is always at-least one because the executable name is the argument.  */
int main(int argc, char *argv[])
{
	int i;

	for (i=0; i<argc; i++) {
		printf("Argument %d is %s\n", i, argv[i]);
	}

	return 0;
}
