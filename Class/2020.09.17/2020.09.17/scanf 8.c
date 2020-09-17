#include <stdio.h>

int main(){
	int num1, num2, total;
	
	printf("8진수 16진수를 순서대로 입력하세요. : ");
	scanf_s("%o %x", &num1, &num2);

	total = num1 + num2;

	printf("%o(8) + %x(16) = %d", num1, num2, total);

}