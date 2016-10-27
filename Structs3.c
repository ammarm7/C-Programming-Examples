#include <stdio.h>
#include <string.h>

#define MAX_STR 32

//Defining gloabls structs 
struct PersonType {
	char first[MAX_STR];
	char last[MAX_STR];
	int age;
};

struct StudentType {
	struct PersonType basicInfo;
	char stuNumber[12];
	float gpa;
};

void printStudent(struct StudentType);


int main()
{
	//Creating a person named "Gertrude" 
	struct PersonType gertrude;	
	strcpy(gertrude.first, "Gertrude");
	strcpy(gertrude.last, "Kardashian");
	gertrude.age = 99;
	//Turning Gertrude into a student. 
	struct StudentType stuGert;
	stuGert.basicInfo = gertrude; 
	strcpy(stuGert.stuNumber, "1007654444");
	stuGert.gpa = 7.0;
	//How big are the two types
	printf("size of person: %d\n", sizeof(struct PersonType));
	printf("size of student: %d\n", sizeof(struct StudentType));

	//Creating two students matilda and joe
	struct StudentType matilda, joe;

	strcpy(matilda.basicInfo.first, "Matilda");
	matilda.basicInfo.age = 22;
	strcpy(matilda.stuNumber, "1007776666");
	matilda.gpa = 92.;

	strcpy(joe.basicInfo.first, "Joe");
	strcpy(joe.basicInfo.last, "Physi");
	joe.basicInfo.age = 24;
	strcpy(joe.stuNumber, "1002222333");
	joe.gpa = 5.2;

	printStudent(matilda);
	printStudent(joe);


	stuct StudentType comp2401A[200];

	comp2401A[0] = matilda;
	comp2401A[1] = joe;
	comp2401A[2] = stuGert;

	for (i=0; i<3; i++)
		printStudent(comp2401A[i]);

	return 0;
}


void printStudent(struct StudentType stu){

printf("Student #%s: %s %s, age %d, gpa %.1f\n",
			stu.stuNumber, 
			stu.basicInfo.first, 
			stu.basicInfo.last,
			stu.basicInfo.age,
			stu.gpa);
}



