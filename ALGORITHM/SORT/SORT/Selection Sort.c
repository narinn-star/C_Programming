#include <stdio.h>
int main() {
	//���� ���� ������ �� ������ ������ ��� !
	// �ð� ���⵵ -> N^2
	int min, index, temp; 
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (int i = 0; i < 10; i++) {
		min = 9999; // �迭�� �� �Ͱ� ������ ��, min�� ���� Ŀ�� �� ! (�迭 �ӿ��� ��¥ min�� ã�ƾ��ϱ� ����)
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