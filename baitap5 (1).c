#include<stdio.h>
int main(){
	int numbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, sum;
	for(int i = 0; i < 3; i++){
		sum += numbers[0][i];
	}
	for(int i = 0; i< 3; i++){
		sum += numbers[2][i];
	}
	for(int i = 0; i < 3; i++){
		sum += numbers[i][0];
	}
	for(int i = 0; i < 3; i++){
		sum += numbers[i][2];
	}
	printf("tong cac phan tu nam tren bien la: %d", sum);
	return 0;
}
