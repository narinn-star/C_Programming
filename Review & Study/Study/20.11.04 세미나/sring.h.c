#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(){
	char arr[20];
	gets(&arr);

	//strlen() �μ� �ϳ��� ����
	//printf("%d", strlen(arr)); //���̰� �ƴ� ����Ʈ ���� ����� ��. Ex) �ѱ� -> 4
	//strcpy(a, b) �μ� �ΰ� (b �� a��)
	char arr2[10];
	gets(&arr2);
	//printf("%s", strcpy(arr2, arr));
	
	//strcmp(c, d) �μ� �ΰ� 
	//printf("%d", strcmp(arr, arr2)); // �ΰ��� ���� �� 0 ���, ���� ũ�� 1, �ڰ� ũ�� -1 (�ƽ�Ű�ڵ� �� ��)

	//strcat(e, f) �μ� �ΰ�, e�� f�� �̾��ش�.
	//e�� �迭ũ�Ⱑ 10, f�� �迭ũ�Ⱑ 10�ε�, e�� f�� �ٿ��ִ°��̱� ������ e�� �迭ũ�Ⱑ 10���� �� Ŀ����
	printf("%s", strcat(arr, arr2));

	//strlen, strcpy, strcmp, strcat ���ڿ� ���� �Լ�
}