#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

//  <work space> : Declare appropriate header.

struct student {
	int StdNum;
	char Name[10];
	int Age;
	char Address[10];
};

void PrintCities(struct student *A, int size);
void ArrangeByCity(struct student *B, int size);
// <work spaceB> :	Declare "ArrangeByCity" function.

int main(){

	struct student Aclass[5] = {
		{ .StdNum = 2020101, .Name = "������", .Age = 20, .Address = "�λ��" },
		{ .StdNum = 2019211, .Name = "����", .Age = 21, .Address = "�λ��" },
		{ .StdNum = 2009002, .Name = "����", .Age = 31, .Address = "����" },
		{ .StdNum = 2014014, .Name = "����ȣ", .Age = 26, .Address = "â����" },
		{ .StdNum = 2016999, .Name = "����", .Age = 24, .Address = "â����" }
	};

	PrintCities(Aclass, sizeof(Aclass) / sizeof(struct student));

	ArrangeByCity(Aclass, sizeof(Aclass) / sizeof(struct student));

	return 0;
}

void PrintCities(struct student *A, int size){
	char **cities;
	int count = 1; //cities�� ũ�� (����)
	//�ߺ��� �� ����, �� �� ���� �ֱ� ������ �����Ҵ� 
	cities = (char**)malloc(sizeof(char*)*count);
	//�� ������ ���� cities ����� �Ҵ�
	for (int i = 0; i < count; i++){
		cities[i] = (char*)malloc(sizeof(char)* 10);
	}
	//Student Array Ȯ�ο�
	for (int i = 0; i < size; i++){
		if (i == 0){
			strcpy(cities[0], A[0].Address);// ������ ù��° ���ô� ���� �Ǿ� ����.
		}
		else{
			int isExist = 0;
			//cities�� �� �˻��ؼ�, ���� i��°�� Address�� ���� ���� �ִ��� ����.
			for (int k = 0; k < count; k++){
				if (strcmp(cities[k], A[i].Address) == 0){
					isExist = 1;
					break;
				}
			}
			if (!isExist){
				//���纻 �����
				char ** tmp = (char**)malloc(sizeof(char*)*count);
				for (int m = 0; m < count; m++){
					tmp[m] = (char*)malloc(sizeof(char)* 10);
					strcpy(tmp[m], cities[m]);
				}
				//cities ũ�� �ø���
				cities = (char**)malloc(sizeof(char*)* ++count);
				//���纻���� ���� �� �־�α�
				for (int m = 0; m < count; m++){
					cities[m] = (char*)malloc(sizeof(char)* 10);
					//���纻�� count - 1 ������ ������.
					if (m < count - 1){
						strcpy(cities[m], tmp[m]);
					}
					else{
						strcpy(cities[m], A[i].Address);
					}
				}
			}
		}
	}
	for (int i = 0; i < count; i++){
		printf("%s\n", cities[i]);
	}
}

void ArrangeByCity(struct student* A, int size){
	//���� ī��Ʈ
	int count = 1;
	struct student **B = (struct student**)malloc(sizeof(struct student*)*count); 
	//�־��� A���� Ȯ���ϴ� �ݺ���
	for (int z = 0; z < size; z++){
		//B�� �� ���� (addres���� �л� ����)
		for (int i = 0; i < count; i++){
			if (i == 0){
				B[i] = (struct student *)malloc(sizeof(struct student));
				B[i][0].Age = A[i].Age;
				B[i][0].StdNum = A[i].StdNum;
				strcpy(B[i][0].Name, A[i].Name);
				strcpy(B[i][0].Address, A[i].Address);
			}
			else{
				int isExist = 0;
				//A��
				for (int k = 0; k < size; k++){
					if (strcmp(B[k][0].Address, A[z].Address) == 0){
						isExist = 1;
						break;
					}
				}
				// �ش� ��°�� �迭�� +1 ��Ű��, �л����� �߰�
				if (isExist){

				}
				//��ü �迭�� +1 ��Ű��, �л����� �߰�
				else{

				}
			}
		}
	}
}