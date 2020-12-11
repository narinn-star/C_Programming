#include <stdio.h>
int main(){
	int var = 100;
	int *ptr;

	ptr = &var; // *ptr = 100

	printf("변수 var의 값 : %d \n", var);
	printf("var의 간접 참조 (*ptr) 결과 값 : %d \n", *ptr);
	printf("변수 var의 주소 : %d \n", &var);
	printf("변수 ptr에 저장된 주소 : %d \n", ptr);

	return 0;
}