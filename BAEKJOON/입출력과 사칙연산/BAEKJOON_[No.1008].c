#include <stdio.h>
int main() {

	double A, B;

	scanf_s("%lf %lf", &A, &B);
	printf("%.9lf",A / B);

	return 0;
}