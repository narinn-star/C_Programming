#include <stdio.h>
int main(){
	double fahrenheit;
	double celsius;

	printf("화씨온도(F)를 입력하세요. : ");
	scanf_s("%lf", &fahrenheit);

	celsius = (0.5 / 0.9)*(fahrenheit - 32);


	printf("\n화씨온도 %.1lf의 섭씨온도는 %.1lf입니다.",fahrenheit, celsius);
}