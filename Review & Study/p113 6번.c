#include <stdio.h>
int main() {
	
	double f;
	printf("ȭ���µ�(F)�� �Է��ϼ���. : ");
	scanf_s("%lf", &f);

	double c = (0.5 / 0.9) * (f - 32);
	printf("ȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�.", f,c);
}