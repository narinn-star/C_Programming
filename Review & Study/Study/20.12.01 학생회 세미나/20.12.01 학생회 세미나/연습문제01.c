#include <stdio.h>
//호출된 함수에서는 자신을 호출한 함수의 지역 변수를 직접 참조할 수 없다.
//이를 간접적으로 참조할수 있게 하는 것이 포인터
//n = 3, m = 4 -> m = 4, n = 3으로 바꾸는 방법 !!

int func(int *x, int *y){
	int num = *x;
	*x = *y;
	*y = num;
}

int main(){
	int n = 3, m = 4;
	func(&n, &m);
	printf("n : %d\n", n);
	printf("m : %d\n", m); 
	
	/*
	int n = 9;
	int *ptn = &n;

	printf("n : %d\n", n);
	printf("*ptn : %d\n", *ptn);
	printf("ptn : %d\n", ptn);
	*/
}