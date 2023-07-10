#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s;
	printf("학번을 입력하시오: ");
	scanf_s("%d", &s.number);

	printf("이름을 입력하시오: ");
	scanf_s("%s", &(s.name[0]));

	printf("학점을 입력하시오(실수): ");
	scanf_s("%lf", &s.grade);

	printf("\n학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2lf\n", s.grade);

	return 0;
}