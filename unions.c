#include <stdio.h>
#include <string.h>

typedef struct {
       char npa[3];
       char nxx[3];
       char xxxx[4];
       char null;
} PhonePartsType;	       

//NOTE: The size of a struct is the size of its largest field. 
typedef union {
	char phoneNumber[12];
	PhonePartsType phoneParts;
} PhoneNumberType;

int main()
{
	PhoneNumberType myPhone;

	printf("size of union is %d\n", sizeof(myPhone));

	strcpy(myPhone.phoneNumber, "6135551212");
	printf("My phone is %s\n", myPhone.phoneNumber);	


	myPhone.phoneParts.npa[0] = '5';
	myPhone.phoneParts.npa[1] = '0';
	myPhone.phoneParts.npa[1] = '6';
	
	//This is an example of how the fields in a union occupy the same mem
	printf("My phone is %s\n", myPhone.phoneNumber);

	return 0;
}
