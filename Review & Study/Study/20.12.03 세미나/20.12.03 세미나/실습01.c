#include <stdio.h>
int sum01(int a, int *b, int c){
	*b = a + c;

	return *b;
}

int main(){
	int a, b, c;
	printf("a, b, c�� ������� �Է�\n");
	scanf("%d %d %d", &a, &b, &c);

	int result = sum01(a, &b, c);
	printf("�Լ� ���� �� b = %d", result);
}