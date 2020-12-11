#include <stdio.h>
#include <conio.h>
#define SIZE 5

int main(){
	int quiz[SIZE];
	int  count = 0, sum = 0;
	double avg;

	printf("%d명의 점수를 순서대로 입력하세요.\n\n", SIZE);

	for (int i = 0; i < SIZE; i++){
		printf("%d번의 퀴즈 점수는? ", i + 1);
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

	printf("\n\n결과를 보려면 아무키나 누르세요.\n\n");

	getch(); //키보드로부터 문자 한 개를 입력받는다. 일시 정지하는 효과를 가진다.

	printf("=================\n");
	printf(" 평균 : %.1lf점\n", avg);
	printf(" 평균 미만 : %d명\n", count);
	printf("=================\n");

}