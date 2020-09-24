#include <stdio.h>

int main(){
	
	int giga, mega, killo;
	
	printf("ют╥б(Gigabyte) : ");
	scanf_s("%d", &giga);

	mega = giga * 1024;
	killo = mega * 1024;

	printf(">> %dGigabyte = %dMegabyte = %dKillobyte\n", giga, mega, killo);
}