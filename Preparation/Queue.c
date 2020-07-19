#include <stdio.h>
#define MAX 5
typedef struct Queue {
	int n[5];
	int size;
	int front, rear;
}queue;

queue q;

void init() {
	q.size = MAX;
	q.rear = 0;
	q.front = 0;
}
//push 1 2 3 4 5 [0 1 2 3 4]
int push(int n) {
	if (q.rear >= q.size) {
		return 0;
	}
	else {
		q.n[q.rear] = n;
		q.rear++;
		return 1;
	}
}

//pop
int pop() {
	if (q.front >= q.rear) {
		return 0;
	}
	else {
		printf("%d°¡ pop µÇ¾ú½À´Ï´Ù\n", q.n[q.front]);
		q.front++;
		return 1;
	}
}

int main() {
	init();

	//push
	for (int i = 0; i < MAX + 1; i++) {
		int n;
		printf("input °ª : ");
		scanf_s("%d", &n);
		int m = push(n);
		if (m == 0)
			printf("²Ë Âü\n");
	}

	//pop
	for (int i = 0; i < MAX + 1; i++) {
		int m = pop();
		if (m == 0)
			printf("´Ù ²¨³¿\n");
	}
}