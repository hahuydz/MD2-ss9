#include<stdio.h>
int main(){
	int numbers[6] = {1, 2, 3, 4, 2, 5}, mostNumbers, count, a;
	for(int i = 0; i < 6; i++){
		count = 0;
		for(int j = 0; j < 6; j++){
			if(numbers[i] == numbers[j]){
				count++;
			}
			if(count >= 2){
				mostNumbers = numbers[i];
			}
		}
	}
	printf("phan tu xuat hien nhieu nhat la: %d\n", mostNumbers);
	return 0;
}
