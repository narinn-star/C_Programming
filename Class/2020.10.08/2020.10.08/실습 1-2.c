#include <stdio.h>
int main(){
	int num;
	scanf_s("%d", &num);

	if (num % 2 == 0){
		if (num < 0)
			printf("�Է��� ���� ���� ¦���Դϴ�.");
		else
			printf("�Է��� ���� ���� ¦���Դϴ�.");
	}
	else{
		if (num < 0)
			printf("�Է��� ���� ���� Ȧ���Դϴ�.");
		else
			printf("�Է��� ���� ���� Ȧ���Դϴ�.");
	}
}