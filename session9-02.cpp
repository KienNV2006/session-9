#include <stdio.h>
int main(){
	int arr[6]={1,2,3,4,5,6};
	for(int i=0; i<6; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	
	printf("Nhap vi tri can sua (tu 0 den 5): ");
	int index;
	scanf("%d", &index);
	if(index<0 || index>5){
		printf("Vi tri khong hop le");
        return 1;
	}
	printf("Nhap gia tri moi: ");
	int newValue;
	scanf("%d", &newValue);
	arr[index]=newValue;
	
	printf("Mang moi la: ");
	for(int i=0; i<6; i++){
		printf("%d", arr[i]);
	}
	return 0;
}