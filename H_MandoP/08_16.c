#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int now_money;

void menu();
void balance();
void deposit(int money);
void withdrawal(int money);

int main() {
	int choice, money;

	while (1) {
		menu();
		printf("�޴��� �����ϼ���: ");
		scanf_s("%d", &choice);

		if (choice == 4) {
			printf("���α׷��� �����մϴ�.");
			break;
		}

		switch (choice)
		{
		case 1:
			balance();
			break;
		case 2:
			printf("�Ա� �ݾ��� �Է��Ͻÿ�: ");
			scanf("%d", &money);
			deposit(money);
			break;
		case 3:
			printf("��� �ݾ��� �Է��Ͻÿ�: ");
			scanf("%d", &money);
			withdrawal(money);
			break;
		default:
			printf("�Է��� �߸��ϼ̽��ϴ�.\n");
			continue;
		}
	}
	return 0;
}

void menu() {
	printf("********** Welcome to Express ATM **********\n");
	printf("<1> �ܾ�\n");
	printf("<2> �Ա�\n");
	printf("<3> ���\n");
	printf("<4> ����\n");
}

void balance() {
	printf("�ܰ�� %d���Դϴ�.\n", now_money);
}

void deposit(int money) {
	now_money += money;
	balance();
}

void withdrawal(int money) {
	if (now_money >= money) {
		now_money -= money;
		balance();
	}
	else {
		printf("�ܾ��� �����մϴ�.\n");
		balance();
	}
}