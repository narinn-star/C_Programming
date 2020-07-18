#include <stdio.h>
#include <Windows.h>
#define MAX 5
int top = 0;
int arr[5];

//push 
int push(int data) {
	
	if (top == MAX) {
		return 0;
	}
	else {
		arr[top] = data;
		top++;
		return 1;
	}
}
//pop 
int pop() {
	int n = arr[top - 1];
	top--;
	return n;
}
//list 
void list() {
	for (int i = 0; i < top; i++) {
		printf("< %d > ¹øÂ°ÀÇ °ª : %d\n", i + 1, arr[i]);
	}
}


int main() {
	int sw;
	int n;
	while (1) {
		printf("1.push 2.pop 3.list 4.exit >_<");
		scanf_s("%d", &sw);
		switch (sw) {
		case 1:
			printf("input ÀÔ·ÂÇØÁÖ¼¼¿ë");
			scanf_s("%d", &n);
			int result=push(n);
			if (result == 0) {
				printf("²ËÃ¡´Ù\n");
			}
			system("pause");
			system("cls");
			break;
		case 2:
			if (top != 0) {
				printf("%d", pop());
			}
			else {
				printf("´Ù»°´Ù\n");
			}
			system("pause");
			system("cls");
			break;
		case 3:
			list();
			system("pause");
			system("cls");
			break;
		case 4:
			exit(1);
			break;
		}
	}
}