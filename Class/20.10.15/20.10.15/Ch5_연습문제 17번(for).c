#include <stdio.h>
int main(){
	int input;
	int result = 0;
	scanf_s("%d", &input);

	printf("������ ���� ���� n�� �Է� : %d\n", input);
	for (int i = 1; i <= input; i++)
		result += i*i;
	
	printf("1���� %d������ ������ ���� %d�Դϴ�.", input, result);

}