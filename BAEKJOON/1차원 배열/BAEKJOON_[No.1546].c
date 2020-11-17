#include <stdio.h>
int main() {
	int N,  M = 0 ;
	double avg, arr[1000] = { 0 }, sum = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%lf", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		if (M < arr[i])
			M = arr[i];
	}

	for (int i = 0; i < N; i++) {
		double num = (arr[i] / M) * 100;
		sum += num;
	}
	avg = sum / N;

	printf("%.2lf", avg);
}