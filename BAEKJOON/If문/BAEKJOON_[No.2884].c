#include <stdio.h>
int main() {
	//45분 일찍 알람 설정하기
	//원래 설정되어 있는 알람을 45분 앞서는 시간으로 바꾸기
	int H, M;
	scanf_s("%d %d", &H, &M);
	
	if (H == 0) {
		if (M < 45) {
			H = 23;
			M = (60 - 45) + M;
		}
		else {
			H = 0;
			M = M - 45;
		}
	}
	else {
		if (M < 45) {
			H = H - 1;
			M = (60 - 45) + M;
		}
		else {
			H = H;
			M = M - 45;
		}
	}
	printf("%d %d", H, M);
}