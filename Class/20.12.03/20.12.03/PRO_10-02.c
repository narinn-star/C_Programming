#include <stdio.h>

int main(){
	int a = 100, b = 200, temp;
	int *p1, *p2, *p_temp;

	p1 = &a;
	p2 = &b;
	printf("a = %d, b = %d\n", a, b);
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	printf("\n>> p1�� p2�� ����Ű�� ���� ����� ���� ���� �ٲٱ�\n");
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("a = %d, b = %d\n", a, b);
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	printf("\n>> ������ p1�� p2�� ����� �ּҸ� �ٲٱ� \n");
	a = 100, b = 200;
	
	p_temp = p1;
	p1 = p2;
	p2 = p_temp;

	printf("a = %d, b = %d\n", a, b);
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	return 0;
}