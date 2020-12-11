#include <stdio.h>
int main(){
	char vc = 'A', *pc;
	int vi = 123, *pi;
	double vd = 12.345, *pd;

	pc = &vc;
	pi = &vi;
	pd = &vd;

	printf("\npc - 1 = %d, pc = %d, pc + 1 = %d", pc - 1, pc, pc + 1);
	printf("\npi - 1 = %d, pi = %d, pi + 1 = %d", pi - 1, pi, pi + 1);
	printf("\npd - 1 = %d, pd = %d, pd + 1 = %d", pd - 1, pd, pd + 1);

	return 0;
}