#include <stdio.h>
int main(){
	int input;
	int arr[10] = { 0 }; // arr[0] ~ arr[9]
	int max;

	printf("input : ");
	scanf("%d", &input);

	while (input > 0){
		//int temp = input % 10;
		arr[input % 10] ++;
		input /= 10;
	}
	max = arr[0];
	for (int i = 0; i < 10; i++){
		if (max < arr[i])
			max = arr[i];
	}
	printf("output : \n");
	for (int i = 0; i < 10; i++){
		for (int z = 0; z < 10; z++){
			if (arr[z] == max){
				printf("%d :", z);
				for (int j = 0; j < max; j++){
					printf("*");
				}
				printf("\n");
			}
		}
		max--;
	}

	return 0;
}