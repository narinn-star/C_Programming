#include <stdio.h>
//ȣ��� �Լ������� �ڽ��� ȣ���� �Լ��� ���� ������ ���� ������ �� ����.
//�̸� ���������� �����Ҽ� �ְ� �ϴ� ���� ������
//n = 3, m = 4 -> m = 4, n = 3���� �ٲٴ� ��� !!

int func(int *x, int *y){
	int num = *x;
	*x = *y;
	*y = num;
}

int main(){
	int n = 3, m = 4;
	func(&n, &m);
	printf("n : %d\n", n);
	printf("m : %d\n", m); 
	
	/*
	int n = 9;
	int *ptn = &n;

	printf("n : %d\n", n);
	printf("*ptn : %d\n", *ptn);
	printf("ptn : %d\n", ptn);
	*/
}