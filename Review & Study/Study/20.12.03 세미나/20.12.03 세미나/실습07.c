#include <stdio.h>
#include <malloc.h>
//����ü �����Ҵ�
struct user{
	char name[10];
	char gender;
	int age;
	char address[100];
};

int main(){
	struct user *p;
	p = (struct user*)malloc(sizeof(struct user) * 100);
}