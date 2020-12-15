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
		{ .StdNum = 2020101, .Name = "더대현", .Age = 20, .Address = "부산시" },
		{ .StdNum = 2019211, .Name = "김당균", .Age = 21, .Address = "부산시" },
		{ .StdNum = 2009002, .Name = "김대공", .Age = 31, .Address = "울산시" },
		{ .StdNum = 2014014, .Name = "도성호", .Age = 26, .Address = "창원시" },
		{ .StdNum = 2016999, .Name = "김당대", .Age = 24, .Address = "창원시" }
	};

	PrintCities(Aclass, sizeof(Aclass) / sizeof(struct student));

	ArrangeByCity(Aclass, sizeof(Aclass) / sizeof(struct student));

	return 0;
}

void PrintCities(struct student *A, int size){
	char **cities;
	int count = 1; //cities의 크기 (개수)
	//중복이 될 수도, 안 될 수도 있기 때문에 동적할당 
	cities = (char**)malloc(sizeof(char*)*count);
	//각 사이즈 마다 cities 빈공간 할당
	for (int i = 0; i < count; i++){
		cities[i] = (char*)malloc(sizeof(char)* 10);
	}
	//Student Array 확인용
	for (int i = 0; i < size; i++){
		if (i == 0){
			strcpy(cities[0], A[0].Address);// 어차피 첫번째 도시는 들어가게 되어 있음.
		}
		else{
			int isExist = 0;
			//cities를 다 검사해서, 현재 i번째의 Address와 같은 것이 있는지 비교함.
			for (int k = 0; k < count; k++){
				if (strcmp(cities[k], A[i].Address) == 0){
					isExist = 1;
					break;
				}
			}
			if (!isExist){
				//복사본 만들기
				char ** tmp = (char**)malloc(sizeof(char*)*count);
				for (int m = 0; m < count; m++){
					tmp[m] = (char*)malloc(sizeof(char)* 10);
					strcpy(tmp[m], cities[m]);
				}
				//cities 크기 늘리기
				cities = (char**)malloc(sizeof(char*)* ++count);
				//복사본에서 원래 것 넣어두기
				for (int m = 0; m < count; m++){
					cities[m] = (char*)malloc(sizeof(char)* 10);
					//복사본은 count - 1 까지만 존재함.
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
	//도시 카운트
	int count = 1;
	struct student **B = (struct student**)malloc(sizeof(struct student*)*count); 
	//주어진 A들을 확인하는 반복문
	for (int z = 0; z < size; z++){
		//B의 각 원소 (addres별로 학생 묶기)
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
				//A의
				for (int k = 0; k < size; k++){
					if (strcmp(B[k][0].Address, A[z].Address) == 0){
						isExist = 1;
						break;
					}
				}
				// 해당 번째의 배열을 +1 시키고, 학생정보 추가
				if (isExist){

				}
				//전체 배열을 +1 시키고, 학생정보 추가
				else{

				}
			}
		}
	}
}