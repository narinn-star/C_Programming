//º≥≈¡ πË¥ﬁ
#include <stdio.h>
int main(){
	int N, count = 0;
	scanf("%d", &N);

	while (1){
		if (N % 5 == 0){
			count += N / 5; 
		}
		else{
			count += N / 5;
			count += (N % 5) / 3;
			if (N % 3 != 0)
				printf("-1\n");
				break;
		}
	}
	printf("%d", count);
}