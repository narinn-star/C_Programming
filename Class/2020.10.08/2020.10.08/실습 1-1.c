#include <stdio.h>
int main(){
	int temp;

	printf("���� �µ��� �Է����ּ���.");
	scanf_s("%d", &temp);

	if (temp < 0)
		printf("���� �µ��� ���� %d���Դϴ�.", temp);
	else
		printf("���� �µ��� %d���Դϴ�.", temp);
}