#include <stdio.h>
#include <stdlib.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s;

	s.number = 20230001;
	strcpy(s.name, "È«±æµ¿");
	s.grade = 4.3;

	printf("ÇÐ¹ø: %d\n", s.number);
	printf("ÀÌ¸§: %s\n", s.name);
	printf("ÇÐÁ¡: %.2f\n", s.grade);

	return 0;
}