#include <stdio.h>
int main(){
	double fahrenheit;
	double celsius;

	printf("ȭ���µ�(F)�� �Է��ϼ���. : ");
	scanf_s("%lf", &fahrenheit);

	celsius = (0.5 / 0.9)*(fahrenheit - 32);


	printf("\nȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�.",fahrenheit, celsius);
}