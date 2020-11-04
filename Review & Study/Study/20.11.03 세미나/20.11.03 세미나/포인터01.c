#include <stdio.h>
int main(){
	int a, c, d[3];
	char b;
	printf("%d\n", &a);

	printf("%d\n", &b);

	printf("%d\n", &c);
	printf("-----------\n");

	for (int i = 0; i < 3; i++){
		printf("%d\n", &d[i]);
	}
	printf("%d\n", &d); // d[0]의 주소값을 가져오게 됨.
}	