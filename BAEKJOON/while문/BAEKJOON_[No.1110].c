#include <stdio.h>
int main() {
	int N, newN = 0, result = 0, count = 0;
	scanf_s("%d", &N);
	newN = N;

	while (1) {
		result = (newN / 10) + (newN % 10);
		newN = ((newN % 10) * 10) + (result % 10);
		count++;
		if (N == newN)
			break;
		
	}
	printf("%d", count);
}