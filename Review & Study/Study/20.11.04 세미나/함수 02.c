#include <stdio.h>
//�Լ� Ư¡ : 
void AddBtoA(int* A, int* B){
	*A += *B;
	printf("%d", *A);
}
int main(){
	int A = 5;
	int B = 10;
	AddBtoA(&A, &B);
	printf("%d", A);
	
}