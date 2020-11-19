#include <stdio.h>
int main(){
	int N; 
	scanf("%d", &N);

	for (int i = 1; i <= N ; i++){
		for (int j = 0; j < i; j++){
			printf("*");
		}
		for (int k = i; k <= N; k++){
			printf("-");
		}
		for (int l = i; l < N; l++){
			printf("-");
		}
		for (int m = 0; m < i+1; m++){
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < 2 * N; i++){
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < N; i++){
		for (int j = i; j < N; j++){
			printf("*");
		}
		for (int k = 1; k < 2 * i + 1; k++){
			printf("-");
		}
		printf("\n");
	}
}