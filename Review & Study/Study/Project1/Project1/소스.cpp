#include <stdio.h>
int main() {
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);

	//n1�� n2 ������ 3�� ��� ���ϱ�
	/*int mul = 0;
	for (int i = n1; i <= n2; i++) {
		if (i % 3 == 0){
			mul = i;
		}
	}
	printf("��� : %d", mul);*/
	
	int sum = 0, count = 0;
	int i = n1;
	while (sum < 100 && i < n2){
		if (i % 3 == 0){
			sum += i;
			if (count == 0)
				printf("%d", i);
			else
				printf(" + %d ", i);
		}
		i++;
	}
	printf(" = %d, %ȸ", sum, count);
}