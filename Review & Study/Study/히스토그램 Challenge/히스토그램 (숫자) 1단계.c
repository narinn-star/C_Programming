#include <stdio.h>
int main() {
	int input, result, arr[10] = { 0 };
	scanf_s("%d", &input);

	while (input > 0) {
		result = input % 10;
		arr[result]++;
		input /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d :", i);
		for (int j = arr[0]; j < arr[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
}