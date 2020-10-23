#include <stdio.h>
int main() {
	double r, length, area, volume;
	
	printf("반지름(cm)을 입력하세요.");
	scanf_s("%lf", &r);

	double pi = 3.14;
	length = 2 * pi * r;
	area = pi * r * r;
	volume = (4.0 / 3.0) * pi * r * r * r;

	printf("둘레 = %7.2lf㎝\n", length);
	printf("면적 = %7.2lf㎠\n", area);
	printf("부피 = %7.2lf㎤", volume);
}