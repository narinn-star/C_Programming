#include <stdio.h>
int main(){
	char ch = ' ';
	char* cptr;
	cptr = &ch; //�ּҰ���

	while (1){
		scanf("%c", &ch);
		printf("%c", *cptr);
		if (*cptr == 'z')
			break;
	}
}