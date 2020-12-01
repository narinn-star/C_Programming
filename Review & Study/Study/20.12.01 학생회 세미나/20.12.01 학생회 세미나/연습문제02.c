#include <stdio.h>
#include <stdlib.h>
//¾î·Á¿ý !!!!
int main(){
	char * name[5] = { 0 };
	int i;

	for (i = 0; i < 5; i++){
		name[i] = (char *)malloc(sizeof(char)* 100);
		scanf("%s", name[i]);
	}

	for (i = 0; i < 5; i++){
		printf("%s ", name[i]);
	}
}