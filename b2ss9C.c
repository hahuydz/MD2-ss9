#include<stdio.h>
int main(){
	
	int arr[100];
	int n;
	printf("Nhap so cac phan tu:");
	scanf("%d",&n);
	for(int i = 0; i<n; i++){
		printf("nhap cac gia tri:");
		scanf("%d",&arr[i]);
		
	}
	int  index;
	printf("Nhap vi tri muon sua:");
	scanf("%d",&index);
	for(int i=index; i<n-1; i++){
		arr[i]=arr[i+1];
	}
	for(int i=n; i>index; i--){
		arr[i]=arr[i-1];
	}
	int a;
	printf("nhap so muon sua:");
	scanf("%d",&a);
	arr[index]=a;
	
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	
	
	
	
	return 0;
}  
