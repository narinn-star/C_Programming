#include <stdio.h>

int main() {	
	int r;
	printf("�ѷ��� ���� ���� ��������?");
	scanf_s("%d",&r);

	double length = 2 * 3.14 * r;
	printf("�������� %d�� ���� �ѷ��� %.2lf\n", r, length);

}