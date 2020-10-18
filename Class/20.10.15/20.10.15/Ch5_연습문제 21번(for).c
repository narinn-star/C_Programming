#include <stdio.h>
int main(){
	int a, b;

	scanf_s("%d %d", &a, &b);
	printf("두개의 정수 입력 : %d %d\n", a, b);

	printf("%d의 배수이지만 %d의 배수는 아닌 수\n",a,b);

	for (int i = 0; i <= 100; i++){
		if (i%a == 0 && i % b != 0)
			printf("%d ", i);
	}

}