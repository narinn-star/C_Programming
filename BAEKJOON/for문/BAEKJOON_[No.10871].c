#include <stdio.h>
int main() {
	int N, X, index;
	scanf_s("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &index);
		if (index < X)
			printf("%d ", index);
	}
}