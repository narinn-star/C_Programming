#include <stdio.h>
int main() {
	int num1, num2;

	printf("8���� 16������ ������� �Է��ϼ���. : ");
	scanf_s("%o %x", &num1, &num2);

	double sum = num1 + num2;
	printf("%o(8) + %x(16) = %.0lf", num1, num2, sum);
}