#include <stdio.h>
int main(){
	int input;
	int result = 0;
	scanf_s("%d", &input);

	printf("제곱의 합을 구할 n을 입력 : %d\n", input);
	int i = 1;
	while (i <= input){
		result += i*i;
		i++;
	}
	printf("1부터 %d까지의 제곱의 합은 %d입니다.", input, result);

}