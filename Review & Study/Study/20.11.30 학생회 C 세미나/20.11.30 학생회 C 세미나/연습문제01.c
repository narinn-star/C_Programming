#include <stdio.h>
int find_min(int arr[]){
	int min = arr[0];
	for (int i = 0; i < 5; i++){
		if (arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int main(){

	int arr[6] = { 25, 33, 6, 43, 19 };
	int min = find_min(arr);
	printf("최소값은 %d 입니다\n", min);
}