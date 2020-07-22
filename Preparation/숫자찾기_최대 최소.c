#include <stdio.h>
//큰값
int max(int arr[], const int MAX) {
	int maxValue = arr[0];
	for (int i = 1; i < MAX; i++) {
		if (maxValue < arr[i])
			maxValue = arr[i];
	}
	return maxValue;
}

//작은값
int min(int arr[], const int MAX) {
	int minValue = arr[0];
	for (int i = 1; i < MAX; i++) {
		if (minValue > arr[i])
			minValue = arr[i];
	}
	return minValue;
}

int main() {
	int arr[10] = { 39, 25, 84, 93, 15, 58, 23, 43, 50, 82 };//10 ~ 100 사이
	int maxValue = max(arr, 10);
	int minValue = min(arr, 10);
	printf("최대값은 %d이고 최소값은 %d입니다.", maxValue, minValue);
}