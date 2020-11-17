#include <stdio.h>
int main() {
	int num[10], count, result = 0, input;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &input);
		num[i] = input % 42;
	}

	for (int i = 0; i < 10; i++) {
		count = 0;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				count++;
			}
		}
		if (count == 0) {
			result++;
		}
	}
	printf("ÃÖÁ¾ °ª : %d", result);
}