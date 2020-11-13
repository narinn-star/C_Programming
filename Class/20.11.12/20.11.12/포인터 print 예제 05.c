#include <stdio.h>
int main(){
	int a, b, *ap, *bp;
	scanf("%d %d", &a, &b);

	ap = &a;
	bp = &b;

	printf("그냥 합 : %d", a + b);
	printf("포인터 합 : %d", *ap + *bp);
}