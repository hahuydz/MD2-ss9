#include<stdio.h>
int main(){
	int numbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, sum = 0, j = 2;
	for(int i = 0; i < 3; i++){
		printf("%d\n", numbers[i][j]);
		sum += numbers[i][j];
		j--;
	}
	printf("tong cac phan tu nam tren duong cheo phu la: %d", sum);
	return 0;
}
