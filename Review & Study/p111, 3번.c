#include <stdio.h>
int main() {
	int kor, music;

	printf("���� ���� ������?");
	scanf_s("%d %d", &kor, &music);
	
	double avg = (kor + music) / 2.0;
	printf("=================\n");
	printf("����  ����  ���\n");
	printf("-----------------\n");
	printf("%3d   %3d   %.1lf\n", kor, music, avg);
	printf("=================\n");
}