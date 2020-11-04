#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	//scanf로는 띄어쓰기를 입력받을 수 없다.
	//띄어쓰기 (spacebar)는 NULL값으로 인식되기 때문
	char A[10];
	scanf("%s", A);

	for (int i = 0; i < 10; i++){
		printf("%c", A[i]);
	}
}