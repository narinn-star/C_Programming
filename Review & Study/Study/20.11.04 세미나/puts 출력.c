#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char arr[10];
	gets(&arr);

	puts(arr); // �ڵ����� ������ ��.

	printf("%s", arr); 
}