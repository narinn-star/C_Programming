#include <stdio.h>
#include <malloc.h>
//�����Ҵ�
int main(){
	int a;
	int *b;
	scanf("%d", &a);
	b = (int *)malloc(sizeof(int)* 100); //malloc => ��Ÿ��

	printf("%d", _msize(b)/sizeof(int));
	//printf("%d", sizeof(b)); //sizeof => ������
}