#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(){
	char data[10], data2[10];
	gets(&data);
	gets(&data2);

	printf("%s", strcat(data, data2));
}
