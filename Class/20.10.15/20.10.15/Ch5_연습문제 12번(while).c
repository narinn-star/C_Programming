#include <stdio.h>
int main(){
	int input;
	scanf_s("%d", &input);

	printf("����� 3�� ����� ������ : %d\n", input);
	int i = 1;
	while (i <= input){
		printf(" %d ", i * 3);
		i++;
	}
}