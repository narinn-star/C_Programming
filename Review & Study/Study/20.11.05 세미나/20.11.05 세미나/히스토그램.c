#include <stdio.h>
int main(){
	int input;
	int arr[10] = { 0 }; // arr[0] ~ arr[9]

	printf("input : ");
	scanf("%d", &input);

	while (input > 0){
		//int temp = input % 10;
		arr[input % 10] ++;
		input /= 10;
	}
	printf("output : \n");
	for (int i = 0; i < 10; i++){
		printf("%d : ", i);
		for (int j = 0; j < arr[i]; j++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}