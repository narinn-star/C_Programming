#include <stdio.h>
int main() {
	int N;
	scanf_s("%d", &N);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", N, i, N * i);
	}
}