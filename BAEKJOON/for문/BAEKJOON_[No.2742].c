#include <stdio.h>
int main() {
	int N;
	scanf_s("%d", &N);
	for (int i = N; i >= 1; i--) {
		printf("%d\n", i);
	}
}