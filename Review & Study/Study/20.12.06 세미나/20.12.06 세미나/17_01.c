#include <stdio.h>
#include <string.h>

//����ü�� �뵵 : �������� ����ϱ� 
//����ü �ȿ� ����ü �ֱ� person{name,date{year, month, day},score}

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

void output_info(struct person* p, int size){//����ü �迭�� ���Ҹ� ���
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
		printf("�ٲ� �̸� �Է� >> ");
		scanf("%s", name);
		strcpy(p[idx].name, name);
	}
	else{
		printf("�ش� �̸� %s�� �������� �ʽ��ϴ�.\n", s);
	}
}

void list_birthday_byMonth(struct person p[], int size){
	//���� ��Ÿ���� �ݺ���
	for (int i = 1; i <= 12; i++){
		int count = 0; // count 0���� �ʱ�ȭ
		//ȸ�� �˻�
		for (int j = 0; j < size; j++){
			if (p[j].birthday.month == i){
				if (++count == 1){
					printf("%2d��\t���� : %s", i, p[j].name);
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
		{ .name = "��浿", .birthday = { .year = 1990, .month = 7, .day = 5 }, .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 40 },
		{ .name = "�輼��", .birthday = { .year = 1994, .month = 6, .day = 20 }, .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 55 },
		{ .name = "��ȫ��", .birthday = { .year = 1990, .month = 10, .day = 3 }, .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "�迵��", .birthday = { .year = 1995, .month = 4, .day = 30 }, .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "������", .birthday = { .year = 1991, .month = 4, .day = 5 }, .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};

	//int size = sizeof(persons) / sizeof(struct person); size�� �����ص��� �ʰ� �����ϰ� ���α׷��� �ϴ� ��� ! (size�� ��� �ٲ� ������ �ȴ�!)
	//	output_info(persons, 5);
	//	change_name(persons, "��浿", 5);
	//	output_info(persons, 5);
	list_birthday_byMonth(persons, 5);
	return 0;
}