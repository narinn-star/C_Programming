#include <stdio.h>
int main(){
	int num, *iptr;
	
	iptr = &num;
	scanf("%d", iptr);


	printf("iptr(num) = %d\n", *iptr);

	printf("1 증가 시키기 : %d", *iptr + 1);
}