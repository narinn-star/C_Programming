#include <stdio.h>

int main() {

	double length1, length2;

	printf("밑변, 높이 : ");
	scanf_s("%lf %lf", &length1, &length2);

	double area = (length1 * length2) * 0.5;

	printf("밑변=%.2lfcm, 높이=%.2lfcm인 삼각형의 면적=%.2lfcm²", length1, length2, area);
}