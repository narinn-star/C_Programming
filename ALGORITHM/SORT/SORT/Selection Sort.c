#include <stdio.h>
int main() {
	//가장 작은 수들을 맨 앞으로 보내는 방법 !
	// 시간 복잡도 -> N^2
	int min, index, temp; 
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (int i = 0; i < 10; i++) {
		min = 9999; // 배열에 든 것과 비교했을 때, min이 가장 커야 함 ! (배열 속에서 진짜 min을 찾아야하기 때문)
		for (int j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
}