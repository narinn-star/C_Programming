#include <stdio.h>
int main(){
	int input;
	scanf_s("%d", &input);

	printf("출력할 3의 배수의 개수는 : %d\n",input);
	
	for (int num = 1; num <= input; num++)
		printf(" %d ", num * 3);
}