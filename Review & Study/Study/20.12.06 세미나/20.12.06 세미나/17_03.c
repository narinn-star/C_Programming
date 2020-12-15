#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * get_Dstr(int size){
	char *s;
	int count = 0;
	//1. size만큼의 char 배열을 동적 할당.
	s = (char*)malloc(sizeof(char)* (size+1));

	
	//2.getch로 입력을 받아서, s 배열에 하나씩 추가. <- 어렵따 .. . . . . . . 
	for (char c = getch(); c != '\r'; c = getch()){
		c = getch();
		printf("%c", c);
		//3. 만약, 입력값이 할당된 공간을 초과하는 경우,
		//새로 +a 공간을 할당한 후, 기존값을 복사하고, 추가된 값을 넣은 후, 원래 값으로 돌아와!
		if (count < size){
			s[count++] = c;
		}
		//초과하는 경우
		else{
			//3-1. 새로운 공간 할당 (+a)
			char *copy_s;
			
			copy_s = (char *)malloc(sizeof(char)*(size+1));
			for (int j = 0; j < size; j++){
				copy_s[j] = s[j];
			}

			s = (char *)malloc(sizeof(char)*(++size + 1));

			//3-2. 기존입력된 문자들을 새로 할당된 공간에 복사(사용하지 않는 공간은 해제함)
			for (int i = 0; i < size - 1; i++){
				s[i] = copy_s[i];
			}
			s[count++] = c;

			free(copy_s);

			//4. 입력된 문자열의 길이를 계산하여 확보된 공간의 크기가 "문자열 길이+1"보다 크면 "문자열 길이+1"만큼의 공간을 확보한 후 기존 문자열을 새로 확보한 공간에 복사함.

			//5. 완성된 문자열이 저장된 공간의 주소를 반환함.
		}
	}
			//3-3. 할당된 공간의 나머지에 문자열의 끝문자인 '\0'문자를 저장할 수 있을 때까지 3-1, 3-2과정을 반복함
	s[count] = NULL;
	printf("\n");

	return s;
}

int main(){
	char *dstr = get_Dstr(3);
	printf("입력된 문자열의 길이는  %d이며, 문자열은 %s입니다.\n", strlen(dstr), dstr);

	return 0;
}

////////////////////////////////슬랙 참고///////////////////////////////////