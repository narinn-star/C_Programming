#include <stdio.h>
int main() {
	int A, B, C, sum = 0, result, arr[10] = { 0 };
	scanf_s("%d %d %d", &A, &B, &C);
	sum = A * B * C;

	while (sum > 0) {
		result = sum % 10;
		arr[result]++;
		sum /= 10;
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}