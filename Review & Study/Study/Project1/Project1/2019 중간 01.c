#include <stdio.h>
int main() {
	//A, B ������ ������ �Է¹��� (A < B)
	int A, B;

	scanf_s("%d %d", &A, &B);
	printf("A = %d, B = %d\n", A, B);

	//A�� B���̿� �ִ� 3�� ��� ��� <ok>
	for (int i = A; i <= B; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	
	//A�� B ���̿� �ִ� �Ҽ� ���
	for (int i = A; i <= B; i++) {
		for (int j = 2; j <= i; j++) {
			if (i == j) //��..................
				printf(" %d ", i);
			if (i % j == 0)
				break;
		}
	}
	printf("\n");
	
	//A���� B���� ���ڵ��� �� ���
	int sum = 0;
	for (int s = A; s <= B; s++) {
			sum += s;
		}
	printf("%d", sum);
}
