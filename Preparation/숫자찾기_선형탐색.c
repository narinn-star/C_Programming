#include <stdio.h>
int linearSearch(int arr[], const int MAX, int key) {
	for (int i = 0; i < MAX; i++) {
		if (arr[i] == key) return i;
	}
	return -1;
}

int main() {
	int arr[10] = { 0, 2, 3, 5, 9, 6, 4, 1, 8, 7 };
	int key = 8;
	int position = linearSearch(arr, 10, key);
	if (position == -1)
		printf("key값인 %d를 찾을 수 없습니다.", key);
	else
		printf("key값 %d의 위치는 %d번째 입니다.", key, position);
}