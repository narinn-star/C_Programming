#include <stdio.h>
int main() {
	//A, B 변수에 정수를 입력받음 (A < B)
	int A, B;

	scanf_s("%d %d", &A, &B);
	printf("A = %d, B = %d\n", A, B);

	//A와 B사이에 있는 3의 배수 출력 <ok>
	for (int i = A; i <= B; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	
	//A와 B 사이에 있는 소수 출력
	for (int i = A; i <= B; i++) {
		for (int j = 2; j <= i; j++) {
			if (i == j) //뎅..................
				printf(" %d ", i);
			if (i % j == 0)
				break;
		}
	}
	printf("\n");
	
	//A에서 B까지 숫자들의 합 출력
	int sum = 0;
	for (int s = A; s <= B; s++) {
			sum += s;
		}
	printf("%d", sum);
}
