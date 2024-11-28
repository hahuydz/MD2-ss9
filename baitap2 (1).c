#include<stdio.h>
int main(){
	int numbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, n, count =0;
	printf("nhap phan tu muon kiem tra: ");
	scanf("%d", &n);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(n == numbers[i][j]){
				count++;
				printf("vi tri cua phan tu trong mang la: %d %d\n", i, j);
			}
		}
	}
	if(count == 0){
		printf("phan tu khong ton tai trong mang");
	}
	return 0;
}
