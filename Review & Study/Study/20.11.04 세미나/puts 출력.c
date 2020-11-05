#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char arr[10];
	gets(&arr);

	puts(arr); // 자동으로 개행이 됨.

	printf("%s", arr); 
}