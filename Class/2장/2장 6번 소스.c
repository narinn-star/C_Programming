#include <stdio.h>
// ȭ���µ��� �����µ��� ��ȯ

int main() {
	double fahrenheit, celsius;
	fahrenheit = 72;
	celsius = (5.0 / 9) * (fahrenheit - 32);
	
	printf("ȭ���µ� %lf���� �����µ� %lf���Դϴ�.\n", fahrenheit, celsius);

	return 0;
}