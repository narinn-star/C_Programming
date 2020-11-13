#include <stdio.h>
int main(){
	int num = 10;
	int* iptr;

	iptr = &num;

	printf("num의 값 : %d\n", num); 
	printf("(*ptr)의 결과 값 : %d\n", *iptr);

	printf("num의 주소 : %d\n", &num);
	printf("*ptr의 주소 : %d\n", iptr);
}