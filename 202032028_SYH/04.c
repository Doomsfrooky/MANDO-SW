#include <stdio.h> 

int main(void) {

	int a = 0, b = 1, c, n;

	printf("�� ��° �ױ��� ���ұ��? ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;

	}

	return 0;

}