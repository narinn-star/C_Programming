#include <stdio.h>
//25인치(inch)의 길이를 센티미터(cm)로 계산하여 출력하는 프로그램
//Hint 1인치는 2.54cm, 그러므로 cm <- inch X 2.54

int main() {
	double a = 25;
	printf("%.0lf inch는 %lf cm 입니다.\n", a, a * 2.54);
}