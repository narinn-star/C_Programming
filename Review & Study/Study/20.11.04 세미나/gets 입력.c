#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	//char* -> 1���� ���ڿ� �迭
	//gets -> 1. enter�� ���ڿ� ���� �˸�. 2. 1���� ���ڿ� �迭�� ����
	char arr[10];
	gets(&arr);

	for (int i = 0; i < 10; i++){
		if (arr[i] == ' ')
			printf("%c", '_');
		else
			printf("%c", arr[i]);
	}
}