#include <stdio.h>
//25��ġ(inch)�� ���̸� ��Ƽ����(cm)�� ����Ͽ� ����ϴ� ���α׷�
//Hint 1��ġ�� 2.54cm, �׷��Ƿ� cm <- inch X 2.54

int main() {
	double a = 25;
	printf("%.0lf inch�� %lf cm �Դϴ�.\n", a, a * 2.54);
}