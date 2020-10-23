#include <stdio.h>
int main() {
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);

	//n1과 n2 사이의 3의 배수 구하기
	/*int mul = 0;
	for (int i = n1; i <= n2; i++) {
		if (i % 3 == 0){
			mul = i;
		}
	}
	printf("배수 : %d", mul);*/
	
	int sum = 0, count = 0;
	int i = n1;
	while (sum < 100 && i < n2){
		if (i % 3 == 0){
			sum += i;
			if (count == 0)
				printf("%d", i);
			else
				printf(" + %d ", i);
		}
		i++;
	}
	printf(" = %d, %회", sum, count);
}