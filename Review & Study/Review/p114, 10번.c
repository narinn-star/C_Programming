#include <stdio.h>

int main() {

	double weight, height;

	printf("키(cm)를 입력하세요.");
	scanf_s("%lf", &height);

	printf("몸무게(kg)를 입력하세요.");
	scanf_s("%lf", &weight);

	double feet, pound;
	
	feet = height * 0.032808;
	pound = weight * 2.20459;
	
	printf("당신의 키는 %.1lf cm (%.1lf feet)입니다.\n", height, feet);
	printf("당신의 체중은 %.1lf kg (%.1lf lb)입니다.\n", weight, pound);

	double stdweight, weightgap;

	stdweight = (height - 100) * 0.9;
	weightgap = weight - stdweight;

	printf("표준체중 %.1lf과의 차이는 %+.1lf kg입니다.", stdweight, weightgap);
}
