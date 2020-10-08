#include <stdio.h>
int main(){
	int x, y;
	scanf_s("%d %d", &x, &y);

	if (x<10 || x>20)
		printf("%d\n", x);

	if (y > 10 && y < 20)
		printf("%d\n", y);
}