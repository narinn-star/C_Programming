#include <stdio.h>
#include <malloc.h>
//2차원 배열 동적할당
int main(){
	char **p;
	int A, B;
	scanf("%d", &A, &B);

	p = (char **)malloc(sizeof(char*)* A);

	for (int i = 0; i < A; i++){
		p[i] = (char*)malloc(sizeof(char)*B);
	}
}