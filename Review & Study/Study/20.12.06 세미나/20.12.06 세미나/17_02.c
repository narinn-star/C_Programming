#include <stdio.h>
#include <string.h>

void delete_a_char(char *str, char delete){
	//���ڿ� �� ���� �ϳ��ϳ� ���ô�
	for (int i = 0; i < strlen(str); i++){
		if (str[i] == delete){
			for (int j = i; j < strlen(str); j++){
				str[j] = str[j + 1];
			}
			break; //�ѹ��� �Ұ���
		}
	}
}

void delete_chars(char *str, char delete){

	//���ڿ� �� ���� �ϳ��ϳ� ���ô�
	for (int i = 0; i < strlen(str); i++){
		if (str[i] == delete){
			for (int j = i; j < strlen(str); j++){
				str[j] = str[j + 1];
			}
			//break; //�ѹ��� �Ұ���
		}
	}
}

int main(){ 

	char str[80];
	gets(str);

	delete_a_char(str, 'o');
	puts(str);
	delete_chars(str, 'g');
	puts(str);

	return 0;
}