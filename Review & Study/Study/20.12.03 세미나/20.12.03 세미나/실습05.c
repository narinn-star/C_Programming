#include <stdio.h>
//구조체
struct user{
	char name[10];
	char gender;
	int age;
	char address[100];
};

int main(){
	/*struct user A = {
		.name = "홍길동",
		.gender = 'M',
		.age = 20,
		.address = "서울" };*/

	/*struct user A[3] = {
		{ .name = "가나다" }, { .name = "라마바" }, { .name = "사아자" }
	};*/
	
	struct user A[3];
}