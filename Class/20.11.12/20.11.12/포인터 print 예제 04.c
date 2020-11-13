#include <stdio.h>
int main(){
	double a, b, *ap, *bp;
	scanf("%lf %lf", &a, &b);

	ap = &a;
	bp = &b;
	
	printf("%lf", *ap + *bp);
	
}