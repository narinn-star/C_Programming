#include <stdio.h>

int ClapCount(int number) {
	int count = 0;
	for (int i = number; i > 0; i /= 10) {
		if ((i % 10) % 3 == 0 && i % 10 !=0) {
			count++;
		}
	}
	return count;
	//�� ���� �Ȱ�..
}

void PrintClap(int count) { // "¦ !" ���
	for (int i = 0; i < count; i++) {
		printf("¦ ! ");
	}
	printf("\n");
}

int main() {
	//while�� ���, ���ѷ��� -> break �ɱ� ���� GameState ���
	int GameState = 1;
	int GameCount = 1; //computer���� ���� !
	int MyAnswer;
	printf("--------------------------------------------------------\n");
	printf("3,6,9�� �� ���� �� �ڼ��� ���� ��ŭ -1 ���ּ��� !\n");
	printf("Ex. 3 : -1, 33 : -2\n");
	printf("--------------------------------------------------------\n");
	printf("369 Game Start !\n\n");

	while (GameState) {
		int clap = ClapCount(GameCount);
		//user turn
		if (GameCount % 4 == 0) {
			printf("[user] : ");
			scanf_s("%d", &MyAnswer);
			if (clap > 0) {
				if (MyAnswer + clap != 0) {
					GameState = 0;
				}
				else {
					PrintClap(clap);
				}
			}
			else {
				if (MyAnswer != GameCount) {
					GameState = 0;
				}
			}
		}
		//computer turn
		else {
			printf("computer[%d] : ", GameCount % 4);
				if (clap > 0) {
					PrintClap(clap);
				}
				else {
					printf("%d", GameCount);
					printf("\n");
				}
		}
		GameCount++;
	}
	return 0;
}