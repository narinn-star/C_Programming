#include <stdio.h>

int main(){
	
	int sec1, sec2, min, hour;
	
	printf("초(sec)입력 : ");
	scanf_s("%d", &sec1);

	hour = sec1 / 3600;
	min = (sec1 % 3600) / 60;
	sec2 = ((sec1 % 3600) % 60);

	printf(">> 입력한 %d초는 %d시간 %d분 %d초입니다.", sec1, hour, min, sec2);
}