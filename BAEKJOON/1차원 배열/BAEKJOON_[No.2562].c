#include <stdio.h>
int main() {
	int arr[9] = { 0 }, max = 0, i, j;
	
	for (i = 0; i < 9; i++) {
		scanf_s("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
			j = i;
		}
	}
	printf("%d\n %d", max, j + 1);
}