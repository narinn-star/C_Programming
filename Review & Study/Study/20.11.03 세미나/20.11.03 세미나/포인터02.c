#include <stdio.h>
int main(){
	/*int* Ap;
	int A = 10,B;
	printf("%d\n", &A);
	printf("%d\n", &Ap);*/

	//연결 되었다 = 같은 주소값을 공유함 
	//메모리 주소는 임의로 변경할 수 없음
	//연려해주는 방법은 ? -> Pointer (Address) 

	/*int A = 10;
	int* Ap;
	Ap = &A;
	*Ap = 15;

	printf("%d", A);*/
	
	int A = 5;
	int* Ap = &A;
	int** App = &Ap;
	int*** Appp = &App;
	* Appp = 20; // *, p 추가 및 제거 함으로써 출력 확인

	printf("%d\n", A);
	printf("%d\n", Ap);
	printf("%d\n", App);
}