#include <stdio.h>

int main() {
	double weight, height;

	printf("키(cm)를 입력하세요.");
	scanf_s("%.1lf", &weight);

	printf("몸무게(kg)를 입력하세요.");
	scanf_s("%.1lf", &height);

	double feet, pound, standardW, swkg;
	feet = height * 30.48;
	pound = weight * 2.20459;
	standardW = (height - 100) * 0.9;
	swkg = weight - standardW;

	printf("당신의 키는 %.1lfcm (%.1lffeet)입니다.\n", height, feet);
	printf("당신의 체중은 %.1lfkg (%.1lflb)입니다.\n", weight, pound);
	printf("표준 체중 %.1lf과의 차이는 %.1lfkg입니다.", standardW, swkg);
}