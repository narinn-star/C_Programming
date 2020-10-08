#include <stdio.h>
int main(){
	char ch;

	scanf_s("%c", &ch);
	printf("%c", ch);

	if (ch >= 'A' && ch <= 'Z')
		printf("알파벳 대문자입니다.");
	else if (ch >= 'a' && ch <= 'z')
		printf("알파벳 소문자입니다.");
	else if(ch >= '0' && ch < '10')
		printf("숫자입니다.");
	else
		printf("알파벳도, 숫자도 아닙니다.");
}