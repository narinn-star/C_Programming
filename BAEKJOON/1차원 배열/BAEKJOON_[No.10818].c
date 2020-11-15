#include <stdio.h>
int arr[1000000];
int main() {
	int max = 0, min = 0;
	int N;
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
		if (i == 0) {
			max = arr[i];
			min = arr[i];
		}
		else {
			if (max < arr[i])
				max = arr[i];
			if (min > arr[i])
				min = arr[i];
		}
	}
	printf("%d %d", min, max);
}