#include <stdio.h>
int main(){
	int a, b, *ap, *bp;
	scanf("%d %d", &a, &b);

	ap = &a;
	bp = &b;

	printf("�׳� �� : %d", a + b);
	printf("������ �� : %d", *ap + *bp);
}