/*Compound data types allow us to store multiple values stored under each variable for example: an array. The values of a compund data types are all the same data type. But you can also have a compound data type, which has different data types inside it. Such as a structue. A structure is more or less similar to a "class" however a struct only contains info, it doesn't have fn's so there is no behaviour present in a struct.*/

#include <stdio.h>

int main()
{
	char myStr[10];

	myStr[0] = 'H';	
	myStr[1] = 'E';
	myStr[2] = 'L';
	myStr[3] = 'L';
	myStr[4] = '0';	
	myStr[5] = '\0';


	printf("%s\n", myStr);

	myStr[0] = 'J';

	printf("%s\n", myStr);

}
