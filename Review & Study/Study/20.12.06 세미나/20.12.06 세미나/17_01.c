#include <stdio.h>
#include <string.h>

//구조체의 용도 : 세부정보 기록하기 
//구조체 안에 구조체 넣기 person{name,date{year, month, day},score}

struct date{
	int year;
	int month;
	int day;
};

struct person{
	char name[10];
	struct date birthday;
	int score[4];
};

void output_info(struct person* p, int size){//구조체 배열의 원소를 출력
	for (int i = 0; i < size; i++){
		int sum = 0;
		printf("%s %d-%d-%d ", p[i].name, p[i].birthday.year, p[i].birthday.month, p[i].birthday.day);
		for (int j = 0; j < 4; j++){
			printf("%d ", p[i].score[j]);
			sum += p[i].score[j];
		}
		printf("%d %.2lf\n", sum, (double)sum / 4);
	}

}

void change_name(struct person p[], char *s, int size){
	int idx;
	int isname = 0;

	for (int i = 0; i < size; i++){
		if (strcmp(s, p[i].name) == 0){
			isname = 1;
			idx = i;
			break;
		}
	}

	if (isname){
		char name[10];
		printf("바꿀 이름 입력 >> ");
		scanf("%s", name);
		strcpy(p[idx].name, name);
	}
	else{
		printf("해당 이름 %s이 존재하지 않습니다.\n", s);
	}
}

void list_birthday_byMonth(struct person p[], int size){
	//월을 나타내는 반복문
	for (int i = 1; i <= 12; i++){
		int count = 0; // count 0으로 초기화
		//회원 검색
		for (int j = 0; j < size; j++){
			if (p[j].birthday.month == i){
				if (++count == 1){
					printf("%2d월\t생일 : %s", i, p[j].name);
				}
				else{
					printf(", %s", p[j].name);
				}
			}
		}
		if (count > 0){
			printf("\n");
		}
	}
}

int main(){
	struct person persons[5] = {
		{ .name = "김길동", .birthday = { .year = 1990, .month = 7, .day = 5 }, .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "김세영", .birthday = { .year = 1994, .month = 6, .day = 20 }, .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "장홍수", .birthday = { .year = 1990, .month = 10, .day = 3 }, .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "김영희", .birthday = { .year = 1995, .month = 4, .day = 30 }, .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "박종수", .birthday = { .year = 1991, .month = 4, .day = 5 }, .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	//int size = sizeof(persons) / sizeof(struct person); size를 고정해두지 않고 유연하게 프로그래밍 하는 방법 ! (size가 어떻게 바뀌어도 실행은 된다!)
	//	output_info(persons, 5);
	//	change_name(persons, "김길동", 5);
	//	output_info(persons, 5);
	list_birthday_byMonth(persons, 5);
	return 0;
}