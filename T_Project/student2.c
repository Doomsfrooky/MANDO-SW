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
	printf("�й��� �Է��Ͻÿ�: ");
	scanf_s("%d", &s.number);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", &(s.name[0]));

	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf_s("%lf", &s.grade);

	printf("\n�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2lf\n", s.grade);

	return 0;
}