#include <stdio.h>
int main(){
	int temp;

	printf("현재 온도를 입력해주세요.");
	scanf_s("%d", &temp);

	if (temp < 0)
		printf("오늘 온도는 영하 %d도입니다.", temp);
	else
		printf("오늘 온도는 %d도입니다.", temp);
}