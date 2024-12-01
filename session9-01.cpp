#include <stdio.h>
int main(){
	int arr[100];
	int n;
	int currentLength=0;
	printf("Moi nhap vao so phan tu muon nhap ");
	scanf("%d", &n);
	if(n<0 || n>100){
		printf("Gia tri nhap khong hop le\n");
		return 1;
	}
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d la: ", i+1);
		scanf("%d", &arr[i]);
		
	}
	currentLength=n;
	printf("Nhap gia tri ma ban muon them: ");
	int value;
	scanf("%d", &value);
	
	printf("Moi nhap vi tri ma ban muon them: ");
	int addIndex;
	scanf("%d", &addIndex);
	
	if(addIndex<0 || addIndex>99){
		printf("Vi tri ban nhap khong hop le");
		return 1;
	}	
	
	if(addIndex>currentLength){
		arr[addIndex]=value;
		currentLength=addIndex+1;
	}else{
		 for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
	}
	   printf("Mang sau khi them:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
