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
		printf("key���� %d�� ã�� �� �����ϴ�.", key);
	else
		printf("key�� %d�� ��ġ�� %d��° �Դϴ�.", key, position);
}