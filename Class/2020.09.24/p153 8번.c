#include <stdio.h>

int main(){

	int month;

	printf("월(1~12) 입력 : ");
	scanf_s("%d", &month);

	(month <= 6) ?
		printf(">> %d월은 상반기입니다.\n", month) :
		printf(">> %d월은 하반기입니다.\n", month);
}