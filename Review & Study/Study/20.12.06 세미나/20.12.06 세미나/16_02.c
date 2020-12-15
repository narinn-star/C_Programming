#include <stdio.h>
#include <string.h>

void init(char **flower, int size){
	char Nflower[100];
	for (int i = 0; i < size; i++){
		scanf("%s", Nflower);
		flower[i] = (char *)malloc(sizeof(char)* strlen(Nflower));
		strcpy(flower[i], Nflower);
	}
}

void prn(char **flower, int size){
	for (int i = 0; i < size; i++){
		printf("%s\n", flower[i]);
	}
}

int main(){
	char* flower[5] = { "lily", "cosmos", "sunflower", "rose", "lavender" };

	init(flower, 5);
	prn(flower, 5);

	return 0;
}