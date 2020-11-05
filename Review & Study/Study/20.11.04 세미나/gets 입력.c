#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	//char* -> 1차원 문자열 배열
	//gets -> 1. enter로 문자열 끝을 알림. 2. 1차원 문자열 배열만 가능
	char arr[10];
	gets(&arr);

	for (int i = 0; i < 10; i++){
		if (arr[i] == ' ')
			printf("%c", '_');
		else
			printf("%c", arr[i]);
	}
}