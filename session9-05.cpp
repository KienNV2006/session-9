#include <stdio.h>
int main() {
    int arr[100], n, choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cua chung\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu ma ban muon nhap: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Phan tu thu %d la: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                for (int i = 0; i < n; i++) {
                    printf("%d, ", arr[i]);
                }
                printf("\n");
                break;

            case 3: {
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d, ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan la: %d\n", sum);
                break;
            }

            case 4: {
                int max = arr[0], min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Gia tri lon nhat la: %d\n", max);
                printf("Gia tri nho nhat la: %d\n", min);
                break;
            }

            case 5: {
                int sum1 = 0;
                printf("Cac phan tu so nguyen to la: ");
                for (int i = 0; i < n; i++) {
                    int is_prime = 1;
                    if (arr[i] <= 1) {
                        is_prime = 0;
                    } else {
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                is_prime = 0;
                                break;
                            }
                        }
                    }
                    if (is_prime == 1) {
                        printf("%d, ", arr[i]);
                        sum1 += arr[i];
                    }
                }
                printf("\nTong cua cac so nguyen to la: %d\n", sum1);
                break;
            }

            case 6: {
                int number, count = 0;
                printf("Nhap so can thong ke: ");
                scanf("%d", &number);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == number) {
                        count++;
                    }
                }
                printf("Co %d phan tu %d trong mang\n", count, number);
                break;
            }

            case 7: {
                int index, valueItem;
                printf("Moi ban nhap vi tri muon chen (0-%d): ", n);
                scanf("%d", &index);
                if (index < 0 || index > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Moi ban nhap gia tri muon chen: ");
                scanf("%d", &valueItem);
                for (int i = n; i > index; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[index] = valueItem;
                n++;
                printf("Mang sau khi chen: ");
                for (int i = 0; i < n; i++) {
                    printf("%d, ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 8:
                printf("Thoat chuong trinh\n");
                break;

            default:
                printf("Gia tri nhap vao khong hop le !!!\n");
        }
    } while (choice != 8);

    return 0;
}