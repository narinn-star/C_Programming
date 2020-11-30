#include <stdio.h>
int find_num(int arr[], int posit){
	for (int i = 0; i < 7; i++){
		if (arr[i] == posit){
			return 1;
		}
	}
	return -1;
}

int main(){
	int arr[8] = { 34, 1, 2, 3, 0, 4, 5 };
	int posit = 3;
	int result = find_num(arr, posit);
	printf("%d", result);

}