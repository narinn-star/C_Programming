#include <stdio.h>
int main(){
	int num = 10;
	int* iptr;

	iptr = &num;

	printf("num�� �� : %d\n", num); 
	printf("(*ptr)�� ��� �� : %d\n", *iptr);

	printf("num�� �ּ� : %d\n", &num);
	printf("*ptr�� �ּ� : %d\n", iptr);
}