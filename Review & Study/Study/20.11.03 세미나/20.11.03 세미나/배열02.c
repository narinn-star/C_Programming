#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	//scanf�δ� ���⸦ �Է¹��� �� ����.
	//���� (spacebar)�� NULL������ �νĵǱ� ����
	char A[10];
	scanf("%s", A);

	for (int i = 0; i < 10; i++){
		printf("%c", A[i]);
	}
}