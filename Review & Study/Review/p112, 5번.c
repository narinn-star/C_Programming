#include <stdio.h>

int main() {

	double length1, length2;

	printf("�غ�, ���� : ");
	scanf_s("%lf %lf", &length1, &length2);

	double area = (length1 * length2) * 0.5;

	printf("�غ�=%.2lfcm, ����=%.2lfcm�� �ﰢ���� ����=%.2lfcm��", length1, length2, area);
}