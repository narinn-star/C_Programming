#include <stdio.h>
int main(){
	double weight, height, std;

	printf("Ű�� ü���� �Է����ּ���");
	scanf_s("%lf %lf", &height, &weight);
	
	printf("Ű : %.0lf\nü�� : %.1lf\n", height, weight);

	std = (height - 100) * 0.9;
	
	if (std - weight < -5)
		printf("����� ��ü���Դϴ�.");
	else if (std - weight > 5)
		printf("����� ��ü���Դϴ�.");
	else
		printf("����� ǥ�� ü���Դϴ�.");
}