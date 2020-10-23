#include <stdio.h>

int main() {

	char text;
	printf("문자를 입력하세요. : ");
	scanf_s("%c", &text);

	printf("%c의 ASCII코드값은 %d입니다.", text, text);
}