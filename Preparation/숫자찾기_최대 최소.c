#include <stdio.h>
//ū��
int max(int arr[], const int MAX) {
	int maxValue = arr[0];
	for (int i = 1; i < MAX; i++) {
		if (maxValue < arr[i])
			maxValue = arr[i];
	}
	return maxValue;
}

//������
int min(int arr[], const int MAX) {
	int minValue = arr[0];
	for (int i = 1; i < MAX; i++) {
		if (minValue > arr[i])
			minValue = arr[i];
	}
	return minValue;
}

int main() {
	int arr[10] = { 39, 25, 84, 93, 15, 58, 23, 43, 50, 82 };//10 ~ 100 ����
	int maxValue = max(arr, 10);
	int minValue = min(arr, 10);
	printf("�ִ밪�� %d�̰� �ּҰ��� %d�Դϴ�.", maxValue, minValue);
}