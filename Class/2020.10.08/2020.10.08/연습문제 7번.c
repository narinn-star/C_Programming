#include <stdio.h>
int main(){
	double weight, height, std;

	printf("키와 체중을 입력해주세요");
	scanf_s("%lf %lf", &height, &weight);
	
	printf("키 : %.0lf\n체중 : %.1lf\n", height, weight);

	std = (height - 100) * 0.9;
	
	if (std - weight < -5)
		printf("당신은 과체중입니다.");
	else if (std - weight > 5)
		printf("당신은 저체중입니다.");
	else
		printf("당신은 표준 체중입니다.");
}