#include <stdio.h>
#include <string.h>

struct student {
	char name[10];	// "name" variable is consist of 3 letters of korean.
	int score[4];	// "score" variable is consist of A to D scores.
	int total;		// "total" variable have uncalculated integer value.
};					// calculating must be execute in "compute" function"

void compute(struct student *Aclass, int size);
void list(struct student *Aclass, int size);
void change_name(struct student *Aclass, char *fname, char *nname, int size);

int main(){
	struct student Aclass[5] = {
		{ .name = "±è¼¼¿µ", .score[0] = 60, .score[1] = 75, .score[2] = 60, .score[3] = 80 },
		{ .name = "±è±æµ¿", .score[0] = 80, .score[1] = 60, .score[2] = 75, .score[3] = 85 },
		{ .name = "ÀåÈ«¼ö", .score[0] = 55, .score[1] = 60, .score[2] = 75, .score[3] = 70 },
		{ .name = "±è¿µÈñ", .score[0] = 50, .score[1] = 80, .score[2] = 90, .score[3] = 85 },
		{ .name = "¹ÚÁ¾¼ö", .score[0] = 90, .score[1] = 80, .score[2] = 85, .score[3] = 90 }
	};
	compute(Aclass, sizeof(Aclass) / sizeof(struct student));
	
	list(Aclass, sizeof(Aclass) / sizeof(struct student));
	printf("\n===============================================\n");

	change_name(Aclass, "±è¿µÈñ", "±è¿µÈ¸", sizeof(Aclass) / sizeof(struct student));
	list(Aclass, sizeof(Aclass) / sizeof(struct student));
	printf("\n===============================================\n");
	change_name(Aclass, "±è¿µÈñ", "±è¿µÈÖ", sizeof(Aclass) / sizeof(struct student));
	list(Aclass, sizeof(Aclass) / sizeof(struct student));

	return 0;
}

void compute(struct student *Aclass, int size){
	for (int i = 0; i < size; i++){// size = 5
		for (int j = 0; j < 4; j++){
			Aclass[i].total = Aclass[i].score[j];
		}
	}
}

void list(struct student *Aclass, int size){

	for (int i = 0; i < size; i++){
		printf("(name)%s, ", Aclass[i].name);
		for (int j = 0; j < 4; j++){
		printf("(score%c)%d, ", 'A'+j, Aclass[i].score[j]);
		}
		printf("(total)%d", Aclass[i].total);
		printf("\n");
	}
}

void change_name(struct student *Aclass, char *fanme, char*nname, int size){
	int isname = 0;
	int idx;
	for (int i = 0; i < size; i++){
		if (strcmp(Aclass[i].name, fanme) == 0){
			isname = 1;
			idx = i;
			break;
		}
	}
	if (isname){
		strcpy(Aclass[idx].name, nname);
	}
	else{
		printf("original name %s is not exist. ¾ø´Ù±¸ ÀÌ³ð¾Æ\n", fanme);
	}
}