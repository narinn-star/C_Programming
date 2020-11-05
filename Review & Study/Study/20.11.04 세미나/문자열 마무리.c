#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char arr[5][100];
	
	for (int i = 0; i < 5; i++){
		gets(&arr[i]);
	}

	for (int i = 0; i < 5; i++){
		printf("%s\n", arr[i]);
	}

}