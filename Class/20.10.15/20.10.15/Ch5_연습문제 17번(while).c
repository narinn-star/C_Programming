#include <stdio.h>
int main(){
	int input;
	int result = 0;
	scanf_s("%d", &input);

	printf("������ ���� ���� n�� �Է� : %d\n", input);
	int i = 1;
	while (i <= input){
		result += i*i;
		i++;
	}
	printf("1���� %d������ ������ ���� %d�Դϴ�.", input, result);

}