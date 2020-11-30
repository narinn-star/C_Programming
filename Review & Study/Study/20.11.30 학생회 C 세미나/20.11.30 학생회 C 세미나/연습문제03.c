#include <stdio.h>

int frequency(int arr[], int value){ //��ǥ��
	int i, count = 0;
	for (i = 0; i < 30; i++){
		if (arr[i] == value){
			count++;
		}
	}
	return count;
}

int rank(int arr[], int idx){
	int count = 0;
	int posit = arr[idx];
	for (int i = 0; i < 9; i++){
		if (i != idx){
			if (posit < arr[i]){
				count++;
			}
		}
	}
	return count + 1;
}

int main(){
	/*
	1 : ������
	2 : ��ȭ
	3 : ������
	4 : ������
	5 : �̸���
	*/
	int survey[30] = { 1, 3, 2, 5, 3, 2, 1, 2, 3, 4, 5, 2, 3, 3, 2, 1, 4, 5, 2, 3, 5, 1, 3, 4, 2, 3, 1, 4, 2, 3 };
	int vote[6] = { 0 };
	
	for (int i = 0; i < 30; i++){
		vote[survey[i]]++;
	}

	printf("������ ��ǥ�� ����\n");
	printf("==================\n");
	for (int i = 1; i < 6; i++){
		switch (i){
		case 1:
			printf("������\t");
			break;
		case 2:
			printf("��ȭ\t");
			break;
		case 3:
			printf("������\t");
			break;
		case 4:
			printf("������\t");
			break;
		case 5:
			printf("�̸���\t");
			break;
		}
		printf("%dǥ\t%d\n",frequency(survey,i), rank(vote,i));
	}

}