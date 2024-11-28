#include<stdio.h>
int main(){
	int n, numbers[3][3];
	printf("hay nhap mot so nguyen: ");
	scanf("%d", &n);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			numbers[i][j] = n;
		}
	}
	for(int i = 0; i< 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", numbers[i][j]);
		}
		printf("\n");
	}
	return 0;
}
