#include <stdio.h>
void X(char *c){
	scanf("%c", c);
}

int main(){
	char c = "";
	X(&c);
	printf("%c", c);
}