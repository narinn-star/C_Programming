#include <stdio.h>

int main() {
	double weight, height;

	printf("Ű(cm)�� �Է��ϼ���.");
	scanf_s("%.1lf", &weight);

	printf("������(kg)�� �Է��ϼ���.");
	scanf_s("%.1lf", &height);

	double feet, pound, standardW, swkg;
	feet = height * 30.48;
	pound = weight * 2.20459;
	standardW = (height - 100) * 0.9;
	swkg = weight - standardW;

	printf("����� Ű�� %.1lfcm (%.1lffeet)�Դϴ�.\n", height, feet);
	printf("����� ü���� %.1lfkg (%.1lflb)�Դϴ�.\n", weight, pound);
	printf("ǥ�� ü�� %.1lf���� ���̴� %.1lfkg�Դϴ�.", standardW, swkg);
}