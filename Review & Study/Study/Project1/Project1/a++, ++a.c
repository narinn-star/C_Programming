#include <stdio.h>
int main(){
	int a = 40;

	printf("%d\n",(a++) + (++a));
	printf("%d", (a++) - (++a));
}