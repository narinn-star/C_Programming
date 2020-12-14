#include <stdio.h>
int sum01(int a, int *b, int c){
	*b = a + c;

	return *b;
}

int main(){
	int a, b, c;
	printf("a, b, c를 순서대로 입력\n");
	scanf("%d %d %d", &a, &b, &c);

	int result = sum01(a, &b, c);
	printf("함수 적용 후 b = %d", result);
}