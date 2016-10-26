/*Structures are a set of variables grouped together. */
#include <stdio.h>
#include <string.h>

#define MAX_STR 32

struct PersonType {
	char first[MAX_STR];
	char last[MAX_STR];
	int age;
};


int main()
{

	struct StudentType { 
		struct PersonType basicInfo;
		char stuNumber[12];
		float gpa;
	};

	struct PersonType gertrude;
	
	strcpy(gertrude.first, "Gertrude");
	strcpy(gertrude.last, "Kardashian");
	gertrude.age = 99;
	
	struct StudentType stuGert;
	stuGert.basicInfo = gertrude;
	strcpy(stuGert.stuNumber, "100851469");
	stuGert.gpa = 7.0;

	printf("Size of PersonType structure: %d\n", sizeof(struct PersonType));
	printf("Size of StudentType structure: %d\n", sizeof(struct StudentType)); 


	return 0;
}

