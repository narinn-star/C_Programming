#include <stdio.h>

int main(){
	int r;
	double length, area, volume, pi;

	pi = 3.141592;

	printf("������(cm)�� �Է��ϼ���.");
	scanf_s("%d", &r);

	length = 2 * pi * r;
	
	printf("�ѷ� = %7.2lf �� \n", length);

	area = pi * r * r;

	printf("���� = %7.2lf �� \n", area);

	volume = 0.4 / 0.3 * pi * r * r * r;

	printf("���� = %7.2lf �� \n", volume);
}