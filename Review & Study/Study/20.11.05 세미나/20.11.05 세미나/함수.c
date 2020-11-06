#include <stdio.h>

int getClapCount(int number){
	int count = 0;

	for (int i = number; i > 0; i /= 10){
		if ((i % 10) % 3 == 0 && i % 10 != 0)
			count++;
	}
	return count;
}

void printClap(int count){
	
	for (int i = 0; i < count; i++){
		printf("¦! ");
	}
	printf("\n");
}

int main(){

	int gamestate = 1;
	int gameCount = 1;
	int myAnswer;

	while (gamestate){

		int clap = getClapCount(gameCount);

		if (gameCount % 4 == 0){
			//user turn
			printf("[user] : ");
			scanf("%d", &myAnswer);
			
			//������ �ڼ��� ����, ����� ���ӿ��� ���ϴ� ����
			if (clap > 0){
				if (myAnswer + clap != 0){
					gamestate = 0;
				}
				else{
					printClap(clap);
				}
			}
		}
		else{
			//computer turn
			printf("[computer%d] : ", gameCount % 4);

			if (clap > 0){
				for (int i = 0; i < clap; i++){
					printf("¦! ");
				}
				printf("\n");
			}
			else{
				printf("%d\n", gameCount);
			}
		}

		gameCount++;
	}


	return 0;
}