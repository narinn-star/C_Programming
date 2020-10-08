#include <stdio.h>
int main(){
	int num;
	scanf_s("%d", &num);

	if (num % 2 == 0){
		if (num < 0)
			printf("입력한 수는 음의 짝수입니다.");
		else
			printf("입력한 수는 양의 짝수입니다.");
	}
	else{
		if (num < 0)
			printf("입력한 수는 음의 홀수입니다.");
		else
			printf("입력한 수는 양의 홀수입니다.");
	}
}