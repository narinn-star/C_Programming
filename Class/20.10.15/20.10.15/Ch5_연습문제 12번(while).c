#include <stdio.h>
int main(){
	int input;
	scanf_s("%d", &input);

	printf("출력할 3의 배수의 개수는 : %d\n", input);
	int i = 1;
	while (i <= input){
		printf(" %d ", i * 3);
		i++;
	}
}