#include <stdio.h>
int main(){
	int input;
	int result = 0;
	scanf_s("%d", &input);

	printf("제곱의 합을 구할 n을 입력 : %d\n", input);
	for (int i = 1; i <= input; i++)
		result += i*i;
	
	printf("1부터 %d까지의 제곱의 합은 %d입니다.", input, result);

}