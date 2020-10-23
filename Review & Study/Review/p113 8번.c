#include <stdio.h>
int main() {
	int num1, num2;

	printf("8진수 16진수를 순서대로 입력하세요. : ");
	scanf_s("%o %x", &num1, &num2);

	double sum = num1 + num2;
	printf("%o(8) + %x(16) = %.0lf", num1, num2, sum);
}