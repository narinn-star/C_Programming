#include <stdio.h>

int main(){
	
	int sec1, sec2, min, hour;
	
	printf("��(sec)�Է� : ");
	scanf_s("%d", &sec1);

	hour = sec1 / 3600;
	min = (sec1 % 3600) / 60;
	sec2 = ((sec1 % 3600) % 60);

	printf(">> �Է��� %d�ʴ� %d�ð� %d�� %d���Դϴ�.", sec1, hour, min, sec2);
}