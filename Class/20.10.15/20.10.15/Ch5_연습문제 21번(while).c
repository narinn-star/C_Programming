#include <stdio.h>
int main(){
	int a, b;

	scanf_s("%d %d", &a, &b);
	printf("두개의 정수 입력 : %d %d\n", a, b);

	printf("%d의 배수이지만 %d의 배수는 아닌 수\n",a,b);

	int i = 0;
	while (i <= 100){
		if (i%a == 0 && i % b != 0)
			printf("%d ", i);
		i++;
	}
}