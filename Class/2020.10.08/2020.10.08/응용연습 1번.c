#include <stdio.h>
int main(){
	int num;
	printf("정수 입력");
	scanf_s("%d", &num);
	printf("입력한 수 %d는", num);
	
	if (num > 100) printf("100보다 큰 수이며");
}