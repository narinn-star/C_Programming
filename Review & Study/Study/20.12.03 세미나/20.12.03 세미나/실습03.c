#include <stdio.h>
#include <malloc.h>
//동적할당
int main(){
	int a;
	int *b;
	scanf("%d", &a);
	b = (int *)malloc(sizeof(int)* 100); //malloc => 런타임

	printf("%d", _msize(b)/sizeof(int));
	//printf("%d", sizeof(b)); //sizeof => 컴파일
}