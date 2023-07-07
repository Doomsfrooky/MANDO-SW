#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

int main() {
	char solution[100] = "meet at midnight";
	char answar[100] = "___ __ ________";
	char ch;
	int i;

	while (1)
	{
		printf("\n문자열을 입력하세요:%s \n", answar);
		printf("글자를 추측하시오");
		ch = _getch();

		for (i = 0; solution[i] != '\0'; i++)
		{
			if (solution[i] == ch)
				answar[i] = ch;
		}

		answar[i] = '\0';

		if (strcmp(solution, answar) == 0)break;

	}
	return 0;
}