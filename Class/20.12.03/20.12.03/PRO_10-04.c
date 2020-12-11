#include <stdio.h>
int main(){
	int a = 100, b = 200;
	int *p1, *p2;

	p1 = &a;
	printf("p1 = &a 후 :  = %d, *p1 = %d\n\n", a, *p1);

	*p1 = *p1 + 1;
	printf("(*p1)++ 후 : a = %d, *p1 = %d\n\n", a, *p1);

	p2 = p1;
	printf("p2 = p1 후 : a = %d, *p1 = %d, *p2 = %d\n\n", a, *p1, *p2);

	(*p2)++;
	printf("(*p2)++ 후 : a = %d, *p1 = %d\n\n", a, *p1);

	printf("&a = %d, &b = %d, b = %d\n\n", &a, &b, b); 
	printf("p1 = %d, p1 - 1 = %d, *(p1 - 3) = %d\n\n", p1, p1 - 1, *(p1 - 3));

	return 0;
}