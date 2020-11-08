#include <stdio.h>

int ClapCount(int number) {
	int count = 0;
	for (int i = number; i > 0; i /= 10) {
		if ((i % 10) % 3 == 0 && i % 10 !=0) {
			count++;
		}
	}
	return count;
	//잘 이해 안감..
}

void PrintClap(int count) { // "짝 !" 출력
	for (int i = 0; i < count; i++) {
		printf("짝 ! ");
	}
	printf("\n");
}

int main() {
	//while문 사용, 무한루프 -> break 걸기 위해 GameState 사용
	int GameState = 1;
	int GameCount = 1; //computer부터 시작 !
	int MyAnswer;
	printf("--------------------------------------------------------\n");
	printf("3,6,9가 들어가 있을 땐 박수의 개수 만큼 -1 해주세요 !\n");
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