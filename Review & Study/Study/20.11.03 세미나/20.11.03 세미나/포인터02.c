#include <stdio.h>
int main(){
	/*int* Ap;
	int A = 10,B;
	printf("%d\n", &A);
	printf("%d\n", &Ap);*/

	//���� �Ǿ��� = ���� �ּҰ��� ������ 
	//�޸� �ּҴ� ���Ƿ� ������ �� ����
	//�������ִ� ����� ? -> Pointer (Address) 

	/*int A = 10;
	int* Ap;
	Ap = &A;
	*Ap = 15;

	printf("%d", A);*/
	
	int A = 5;
	int* Ap = &A;
	int** App = &Ap;
	int*** Appp = &App;
	* Appp = 20; // *, p �߰� �� ���� �����ν� ��� Ȯ��

	printf("%d\n", A);
	printf("%d\n", Ap);
	printf("%d\n", App);
}