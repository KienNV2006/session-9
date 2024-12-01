#include <stdio.h>
int main(){
	int arr[100], choice, n;
	do{
	
	printf("\nMENU\n");
	printf("1.Nhap vao mang\n");
	printf("2.Hien thi mang\n");
	printf("3.Them phan tu\n");
	printf("4.Sua phan tu\n");
	printf("5.Xoa phan tu\n");
	printf("6.Thoat");
	printf("\nLua chon cua ban: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Nhap so luong phan tu: ");
			scanf("%d", &n);
			for(int i=0; i<n; i++){
				printf("Phan tu thu %d la: ", i+1);
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			for(int i=0; i<n; i++){
				printf("%d, ", arr[i]);
				}
				break;
		case 3:
			int index, valueItem;
			printf("Moi ban nhap vi tri can chen: ");
			scanf("%d", &index);
			printf("\nMoi ban nhap gia tri muon chen: ");
			scanf("%d", &valueItem);
			for(int i=n; i>index; i--){
				arr[i]=arr[i-1];
			}
			arr[index]=valueItem;
			n++;
			printf("Mang sau khi chen: ");
			for(int i=0; i<n; i++){
				printf("%d, ", arr[i]);
			}
			break;
		case 4:
				int newValue;
			printf("Moi ban nhap vi tri can sua: ");
			scanf("%d", &index);
			printf("Moi ban nhap gia tri moi: ");
			scanf("%d", &newValue);
			arr[index]=newValue;
			for(int i=0; i<n; i++){
				printf("%d, ", arr[i]);
			}
			break;
		case 5:
			int delIndex;
			printf("Moi ban nhap vao vi tri can xoa: ");
			scanf("%d", &delIndex);
			for(int i=delIndex; i<n-1; i++){
				arr[i]=arr[i+1];
			}	
			n--;
			printf("Mang sau khi xoa phan tu: ");
			for(int i=0; i<n; i++){
				printf("%d, ", arr[i]);
			}
			break;
		case 6:
			printf("Thoat chuong trinh");
			break;
		default:
			printf("Gia tri nhap khong hop le");
	}
	}while(choice!=6);
	return 0;
}