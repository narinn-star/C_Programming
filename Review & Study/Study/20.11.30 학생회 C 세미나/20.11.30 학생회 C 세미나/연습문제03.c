#include <stdio.h>

int frequency(int arr[], int value){ //µæÇ¥¼ö
	int i, count = 0;
	for (i = 0; i < 30; i++){
		if (arr[i] == value){
			count++;
		}
	}
	return count;
}

int rank(int arr[], int idx){
	int count = 0;
	int posit = arr[idx];
	for (int i = 0; i < 9; i++){
		if (i != idx){
			if (posit < arr[i]){
				count++;
			}
		}
	}
	return count + 1;
}

int main(){
	/*
	1 : ¼ºÃáÇâ
	2 : ÀåÈ­
	3 : °©µ¹ÀÌ
	4 : °©¼øÀÌ
	5 : ÀÌ¸ù·æ
	*/
	int survey[30] = { 1, 3, 2, 5, 3, 2, 1, 2, 3, 4, 5, 2, 3, 3, 2, 1, 4, 5, 2, 3, 5, 1, 3, 4, 2, 3, 1, 4, 2, 3 };
	int vote[6] = { 0 };
	
	for (int i = 0; i < 30; i++){
		vote[survey[i]]++;
	}

	printf("¿¬¿¹ÀÎ µæÇ¥¼ö ¼øÀ§\n");
	printf("==================\n");
	for (int i = 1; i < 6; i++){
		switch (i){
		case 1:
			printf("¼ºÃáÇâ\t");
			break;
		case 2:
			printf("ÀåÈ­\t");
			break;
		case 3:
			printf("°©µ¹ÀÌ\t");
			break;
		case 4:
			printf("°©¼øÀÌ\t");
			break;
		case 5:
			printf("ÀÌ¸ù·æ\t");
			break;
		}
		printf("%dÇ¥\t%d\n",frequency(survey,i), rank(vote,i));
	}

}