#include <stdio.h>

int main(){
	int num1, num2, total;
	
	printf("8���� 16������ ������� �Է��ϼ���. : ");
	scanf_s("%o %x", &num1, &num2);

	total = num1 + num2;

	printf("%o(8) + %x(16) = %d", num1, num2, total);

}