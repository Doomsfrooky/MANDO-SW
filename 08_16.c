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
		printf("메뉴를 선택하세요: ");
		scanf_s("%d", &choice);

		if (choice == 4) {
			printf("프로그램을 종료합니다.");
			break;
		}

		switch (choice)
		{
		case 1:
			balance();
			break;
		case 2:
			printf("입금 금액을 입력하시오: ");
			scanf("%d", &money);
			deposit(money);
			break;
		case 3:
			printf("출금 금액을 입력하시오: ");
			scanf("%d", &money);
			withdrawal(money);
			break;
		default:
			printf("입력을 잘못하셨습니다.\n");
			continue;
		}
	}
	return 0;
}

void menu() {
	printf("********** Welcome to Express ATM **********\n");
	printf("<1> 잔액\n");
	printf("<2> 입금\n");
	printf("<3> 출금\n");
	printf("<4> 종료\n");
}

void balance() {
	printf("잔고는 %d원입니다.\n", now_money);
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
		printf("잔액이 부족합니다.\n");
		balance();
	}
}