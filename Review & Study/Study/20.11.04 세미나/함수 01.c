#include <stdio.h>
int GuGu(int a){
	for (int i = 1; i <= 9; i++){
		printf("%d * %d = %d\n", a, i, a*i);
	}
	return 1;
}

int main(){
	//�Լ� : �Է��� �Ǹ� ����� �Ǵ� �� (�Է��� ���� ���� ����)
	//�ϳ� �Է� �޾Ƽ� �� ���� ������ ���
	int input;
	scanf_s("%d", &input);
	GuGu(input);

	return 0;
}