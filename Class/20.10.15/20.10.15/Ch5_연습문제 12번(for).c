#include <stdio.h>
int main(){
	int input;
	scanf_s("%d", &input);

	printf("����� 3�� ����� ������ : %d\n",input);
	
	for (int num = 1; num <= input; num++)
		printf(" %d ", num * 3);
}