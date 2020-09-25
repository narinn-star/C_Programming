#include <stdio.h>
int main() {
	
	double f;
	printf("화씨온도(F)를 입력하세요. : ");
	scanf_s("%lf", &f);

	double c = (0.5 / 0.9) * (f - 32);
	printf("화씨온도 %.1lf의 섭씨온도는 %.1lf입니다.", f,c);
}