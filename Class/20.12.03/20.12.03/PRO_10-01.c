#include <stdio.h>
int main(){
	int var = 100;
	int *ptr;

	ptr = &var; // *ptr = 100

	printf("���� var�� �� : %d \n", var);
	printf("var�� ���� ���� (*ptr) ��� �� : %d \n", *ptr);
	printf("���� var�� �ּ� : %d \n", &var);
	printf("���� ptr�� ����� �ּ� : %d \n", ptr);

	return 0;
}