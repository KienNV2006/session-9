#include <stdio.h>
int main(){
	int arr[100];
	int currentLength=0;
	printf("Moi ban nhap vao so phan tu: ");
	int n;
	scanf("%d", &n);
	if(n<0 || n>100){
		printf("Gia tri nhap vao khong hop le !!!");
		return 1;
	}
	for(int i=0; i<n; i++){
		printf("Phan tu thu %d la: ", i+1);
		scanf("%d", &arr[i]);
		
	}
	currentLength=n;
	printf("\nMoi ban nhap vi tri can xoa: ");
	int pos;
	scanf("%d", &pos);
	if(pos<1 || pos>n){
		printf("Vi tri ban nhap khong hop le !!");
		return 1;
	}
	for(int i=pos-1; i<n-1; i++){
		arr[i]=arr[i+1];
	}
	n--;
	
	printf("Mang sau khi xoa phan tu tai vi tri %d la: ", pos);
	for(int i=0; i<n; i++){
		printf("%d, ", arr[i]);
	}
	return 0;
}