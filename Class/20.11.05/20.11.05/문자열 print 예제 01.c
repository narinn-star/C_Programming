#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char name[7];
	char pnum[14];
	char region[5];
	scanf("%s %s %s", name, pnum, region);
	printf("내 이름은 %s이고, 전화번호는 %s, 사는 곳은 %s시 입니다.", name, pnum, region);

}