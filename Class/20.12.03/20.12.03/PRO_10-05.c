#include <stdio.h>
#include <conio.h>
#define SIZE 5

int main(){
	int quiz[SIZE];
	int  count = 0, sum = 0;
	double avg;

	printf("%d���� ������ ������� �Է��ϼ���.\n\n", SIZE);

	for (int i = 0; i < SIZE; i++){
		printf("%d���� ���� ������? ", i + 1);
		scanf("%d", (quiz + i));
	}

	for (int i = 0; i < SIZE; i++){
		sum = sum + *(quiz + i);
	}

	avg = (double)sum / SIZE;

	for (int i = 0; i < SIZE; i++){
		if (*(quiz + i) < avg){
			count++;
		}
	}

	printf("\n\n����� ������ �ƹ�Ű�� ��������.\n\n");

	getch(); //Ű����κ��� ���� �� ���� �Է¹޴´�. �Ͻ� �����ϴ� ȿ���� ������.

	printf("=================\n");
	printf(" ��� : %.1lf��\n", avg);
	printf(" ��� �̸� : %d��\n", count);
	printf("=================\n");

}