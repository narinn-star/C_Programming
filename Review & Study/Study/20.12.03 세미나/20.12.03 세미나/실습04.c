#include <stdio.h>
#include <malloc.h>
//2���� �迭 �����Ҵ�
int main(){
	char **p;
	int A, B;
	scanf("%d", &A, &B);

	p = (char **)malloc(sizeof(char*)* A);

	for (int i = 0; i < A; i++){
		p[i] = (char*)malloc(sizeof(char)*B);
	}
}