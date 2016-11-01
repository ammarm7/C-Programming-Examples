/* Pointers are variables that store a memory address. But what you put inside is a memory address or a block of dynamically allocated memory. We pass things by refrence rather than passing by value because sometimes we need to make changes inside the fn it is a basic part of correct design another advantage of using pointers is it doesn't matter how big your data is. A pointer is always 4 bytes so it's nice to have something that is reliabele. It also allows changes to areas of mem out of scope. It also allows us to avoid copying data. */ 

#include <stdio.h>


int main()
{
	char c = 'H';
	int i = 42;
	char *cptr;

	printf("Sizes: %d %d %d\n", sizeof(c), sizeof(i), sizeof(cptr));
	
	cptr = &c;

	printf("Addresses: %p %p %p\n", &c, &i, *cptr);
	printf("Values:    %c %d %p\n", c, i, cptr);

	//Great example of derefrenceing...
	printf("Two ways to c: %c %c\n", c, *cptr);

	*cptr = 'J';
	printf("Two ways to c: %c %c\n", c, *cptr);

	return 0;
}


