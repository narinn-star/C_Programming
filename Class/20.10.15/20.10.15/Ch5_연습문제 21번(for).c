#include <stdio.h>
int main(){
	int a, b;

	scanf_s("%d %d", &a, &b);
	printf("�ΰ��� ���� �Է� : %d %d\n", a, b);

	printf("%d�� ��������� %d�� ����� �ƴ� ��\n",a,b);

	for (int i = 0; i <= 100; i++){
		if (i%a == 0 && i % b != 0)
			printf("%d ", i);
	}

}