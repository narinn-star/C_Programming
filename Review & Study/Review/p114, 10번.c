#include <stdio.h>

int main() {

	double weight, height;

	printf("Ű(cm)�� �Է��ϼ���.");
	scanf_s("%lf", &height);

	printf("������(kg)�� �Է��ϼ���.");
	scanf_s("%lf", &weight);

	double feet, pound;
	
	feet = height * 0.032808;
	pound = weight * 2.20459;
	
	printf("����� Ű�� %.1lf cm (%.1lf feet)�Դϴ�.\n", height, feet);
	printf("����� ü���� %.1lf kg (%.1lf lb)�Դϴ�.\n", weight, pound);

	double stdweight, weightgap;

	stdweight = (height - 100) * 0.9;
	weightgap = weight - stdweight;

	printf("ǥ��ü�� %.1lf���� ���̴� %+.1lf kg�Դϴ�.", stdweight, weightgap);
}
