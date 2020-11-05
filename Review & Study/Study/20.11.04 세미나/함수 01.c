#include <stdio.h>
int GuGu(int a){
	for (int i = 1; i <= 9; i++){
		printf("%d * %d = %d\n", a, i, a*i);
	}
	return 1;
}

int main(){
	//함수 : 입력이 되면 출력이 되는 것 (입력이 없을 수도 있음)
	//하나 입력 받아서 그 수의 구구단 출력
	int input;
	scanf_s("%d", &input);
	GuGu(input);

	return 0;
}