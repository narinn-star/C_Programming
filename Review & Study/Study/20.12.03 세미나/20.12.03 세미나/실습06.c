#include <stdio.h>
//구조체 메모리 사이즈 확인하기
struct user{
	char name[10];
	char gender;
	int age;
	char address[100];
};

int main(){
	struct user A;
	struct user B[3];
	printf("%d\n", sizeof(A));
	printf("%d", sizeof(B));
}