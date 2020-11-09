#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char data[50];
	gets(data);

	char delete = 0;
	scanf_s("%c", &delete,1);

	char result[50];

	int cnt = 0;

	for (int i = 0; i < 50; i++){
		if (!(data[i] == delete)){
			result[cnt] = data[i];
			cnt++;
		}
	}
	puts(result);
}
