#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * get_Dstr(int size){
	char *s;
	int count = 0;
	//1. size��ŭ�� char �迭�� ���� �Ҵ�.
	s = (char*)malloc(sizeof(char)* (size+1));

	
	//2.getch�� �Է��� �޾Ƽ�, s �迭�� �ϳ��� �߰�. <- ��Ƶ� .. . . . . . . 
	for (char c = getch(); c != '\r'; c = getch()){
		c = getch();
		printf("%c", c);
		//3. ����, �Է°��� �Ҵ�� ������ �ʰ��ϴ� ���,
		//���� +a ������ �Ҵ��� ��, �������� �����ϰ�, �߰��� ���� ���� ��, ���� ������ ���ƿ�!
		if (count < size){
			s[count++] = c;
		}
		//�ʰ��ϴ� ���
		else{
			//3-1. ���ο� ���� �Ҵ� (+a)
			char *copy_s;
			
			copy_s = (char *)malloc(sizeof(char)*(size+1));
			for (int j = 0; j < size; j++){
				copy_s[j] = s[j];
			}

			s = (char *)malloc(sizeof(char)*(++size + 1));

			//3-2. �����Էµ� ���ڵ��� ���� �Ҵ�� ������ ����(������� �ʴ� ������ ������)
			for (int i = 0; i < size - 1; i++){
				s[i] = copy_s[i];
			}
			s[count++] = c;

			free(copy_s);

			//4. �Էµ� ���ڿ��� ���̸� ����Ͽ� Ȯ���� ������ ũ�Ⱑ "���ڿ� ����+1"���� ũ�� "���ڿ� ����+1"��ŭ�� ������ Ȯ���� �� ���� ���ڿ��� ���� Ȯ���� ������ ������.

			//5. �ϼ��� ���ڿ��� ����� ������ �ּҸ� ��ȯ��.
		}
	}
			//3-3. �Ҵ�� ������ �������� ���ڿ��� �������� '\0'���ڸ� ������ �� ���� ������ 3-1, 3-2������ �ݺ���
	s[count] = NULL;
	printf("\n");

	return s;
}

int main(){
	char *dstr = get_Dstr(3);
	printf("�Էµ� ���ڿ��� ���̴�  %d�̸�, ���ڿ��� %s�Դϴ�.\n", strlen(dstr), dstr);

	return 0;
}

////////////////////////////////���� ����///////////////////////////////////