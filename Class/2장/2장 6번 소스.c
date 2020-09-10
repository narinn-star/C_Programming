#include <stdio.h>
// È­¾¾¿Âµµ¸¦ ¼·¾¾¿Âµµ·Î º¯È¯

int main() {
	double fahrenheit, celsius;
	fahrenheit = 72;
	celsius = (5.0 / 9) * (fahrenheit - 32);
	
	printf("È­¾¾¿Âµµ %lfµµ´Â ¼·¾¾¿Âµµ %lfµµÀÔ´Ï´Ù.\n", fahrenheit, celsius);

	return 0;
}