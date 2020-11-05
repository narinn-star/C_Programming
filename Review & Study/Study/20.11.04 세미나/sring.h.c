#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(){
	char arr[20];
	gets(&arr);

	//strlen() 인수 하나만 가짐
	//printf("%d", strlen(arr)); //길이가 아닌 바이트 수로 출력이 됨. Ex) 한글 -> 4
	//strcpy(a, b) 인수 두개 (b 를 a로)
	char arr2[10];
	gets(&arr2);
	//printf("%s", strcpy(arr2, arr));
	
	//strcmp(c, d) 인수 두개 
	//printf("%d", strcmp(arr, arr2)); // 두개가 같을 때 0 출력, 앞이 크면 1, 뒤가 크면 -1 (아스키코드 상 비교)

	//strcat(e, f) 인수 두개, e와 f를 이어준다.
	//e의 배열크기가 10, f의 배열크기가 10인데, e에 f를 붙여주는것이기 때문에 e의 배열크기가 10보다 더 커야함
	printf("%s", strcat(arr, arr2));

	//strlen, strcpy, strcmp, strcat 문자열 관련 함수
}