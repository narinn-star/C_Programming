#include <stdio.h>
int main() {
	double r, length, area, volume;
	
	printf("������(cm)�� �Է��ϼ���.");
	scanf_s("%lf", &r);

	double pi = 3.14;
	length = 2 * pi * r;
	area = pi * r * r;
	volume = (4.0 / 3.0) * pi * r * r * r;

	printf("�ѷ� = %7.2lf��\n", length);
	printf("���� = %7.2lf��\n", area);
	printf("���� = %7.2lf��", volume);
}