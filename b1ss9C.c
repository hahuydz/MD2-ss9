#include<stdio.h>
int main(){
	
	int arr[100];
	int n;
	printf("nhap so cac gia tri:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap cac gia tri:");
		scanf("%d",&arr[i]);
	}
	
	int index;
	printf("Moi ban nhap vi tri muon chen:");
	scanf("%d",&index);
	for(int i=n; i>index; i--){
		arr[i]=arr[i-1];
	}
	int a;
	printf("nhap so muon chen:");
	scanf("%d",&a);
	arr[index]=a;
	for(int i=0;i<n+1;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
