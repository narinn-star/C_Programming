#include <stdio.h>
void func_1(int *arr){
	
	for (int j = 0; j < 5; j++){//ÀÚ¸´¼ö
		int temp = 0;

		for (int i = j+1; i< 5; i++){//ºñ±³È½¼ö
			if (arr[j] > arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int arr[5] = { 5, 4, 2, 8, 1 };
	func_1(arr);
	for (int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}

}