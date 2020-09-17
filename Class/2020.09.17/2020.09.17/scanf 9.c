#include <stdio.h>

int main(){
	int r;
	double length, area, volume, pi;

	pi = 3.141592;

	printf("반지름(cm)을 입력하세요.");
	scanf_s("%d", &r);

	length = 2 * pi * r;
	
	printf("둘레 = %7.2lf ㎝ \n", length);

	area = pi * r * r;

	printf("면적 = %7.2lf ㎠ \n", area);

	volume = 0.4 / 0.3 * pi * r * r * r;

	printf("부피 = %7.2lf ㎤ \n", volume);
}