#include <stdio.h>
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
	int my_score;
	scanf("%d", &my_score);

	int class[10] = { 10, 8, 7, 9, 6, 10, 9, 8, 7 };
	int count = 0;
	for (int i = 0; i < 9; i++){
		my_score = rank(class, i);
		printf("%d위 입니다.\n", my_score);
	}
	
}