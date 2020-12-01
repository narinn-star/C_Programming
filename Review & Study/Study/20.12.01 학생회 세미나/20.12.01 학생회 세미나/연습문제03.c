#include <stdio.h>

int func_1(int *arr){
	int max = *(arr + 0);
	//int max2 = *(arr + 0);
	for (int i = 0; i < 4; i++){
		if (max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}
int func_2(int *arr){
	int sum = 0;
	int avg;
	for (int i = 0; i < 4; i++){
		sum += arr[i];
	}
	avg = sum / 4;
	return avg;
}

int main(){
	/*
	int a, b;
	printf("&a : %d &b : %d\n", &a, &b);
	*/
	int arr[4] = { 0 };
	
	for (int i = 0; i < 4; i++){
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 4; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	int max = func_1(arr);
	int avg = func_2(arr);
	printf("max : %d, avg : %d", max, avg);
}