#include <stdio.h>
int main(){
	char ch;

	scanf_s("%c", &ch);
	printf("%c", ch);

	if (ch >= 'A' && ch <= 'Z')
		printf("���ĺ� �빮���Դϴ�.");
	else if (ch >= 'a' && ch <= 'z')
		printf("���ĺ� �ҹ����Դϴ�.");
	else if(ch >= '0' && ch < '10')
		printf("�����Դϴ�.");
	else
		printf("���ĺ���, ���ڵ� �ƴմϴ�.");
}