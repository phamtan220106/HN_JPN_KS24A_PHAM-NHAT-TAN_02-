#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100000

int main() {
    int menu, cols, chan, le, max, min, value, index, dem;
    int Arr[N];
    while (1) {
        printf("1. Nhap so phan tu va gia tri cho mang.\n");
        printf("!1. Thoat!.\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);
        if (menu == 1) {
            printf("\n");
            printf("Nhap vao so phan tu co trong mang: ");
            scanf("%d", &cols);
            for (int i = 0; i < cols; i++) {
                printf("Phan tu thu %d: ", i + 1);
                scanf("%d", &Arr[i]);
            }
            while (1) {
                printf("1. In ra cac phan tu trong mang.\n");
                printf("2. Dem so luong phan tu chan le trong mang.\n");
                printf("3. Tim gia tri lon nhat nho nhat trong mang.\n");
                printf("4. Them mot phan tu vao dau mang.\n");
                printf("5. Xoa phan tu tai mot vi tri cu the.\n");
                printf("6. Sap xep mang theo thu tu tang dan.\n");
                printf("7. Nhap vao mot phan tu va kiem tra xem phan tu do co trong mang hay khong.\n");
                printf("8. In toan bo so nguyen to trong mang da duoc binh phuong.\n");
                printf("9. Sap xep mang theo thu tu giam dan.\n");
                printf("10. Thoat.\n");
                printf("Lua chon cua ban: ");
                scanf("%d", &menu);
                switch (menu) {
                    case 1:
                        printf("\nMang ban dang lam viec: ");
                        for (int i = 0; i < cols; i++) {
                            printf("%d ", Arr[i]);
                        }
                        printf("\n");
                        break;
                    case 2:
                        printf("\n");
                        chan = 0;
                        le = 0;
                        for (int i = 0; i < cols; i++) {
                            if (Arr[i] % 2 == 0) {
                                chan++;
                            } else {
                                le++;
                            }
                        }
                        printf("So phan tu chan co trong mang la %d\n", chan);
                        printf("So phan tu le co trong mang la %d\n", le);
                        printf("\n");
                        break;
                    case 3:
                        printf("\n");
                        max = Arr[0];
                        min = Arr[0];
                        for (int i = 0; i < cols; i++) {
                            if (Arr[i] > max) {
                                max = Arr[i];
                            }
                            if (Arr[i] < min) {
                                min = Arr[i];
                            }
                        }
                        printf("Gia tri lon nhat trong mang la %d\n", max);
                        printf("Gia tri nho nhat trong mang la %d\n", min);
                        printf("\n");
                        break;
                    case 4:
                        printf("\nThem mot phan tu vao dau mang\n");
                        printf("Nhap gia tri muon them: ");
                        scanf("%d", &value);
                        for (int i = cols; i > 0; i--) {
                            Arr[i] = Arr[i - 1];
                        }
                        Arr[0] = value;
                        cols++;
                        printf("Mang moi cua ban la: ");
                        for (int i = 0; i < cols; i++) {
                            printf("%d ", Arr[i]);
                        }
                        printf("\n");
                        break;
                    case 5:
                        printf("\nNhap vi tri muon xoa: ");
                        scanf("%d", &index);
                        for (int i = index; i < cols - 1; i++) {
                            Arr[i] = Arr[i + 1];
                        }
                        cols--;
                        printf("Mang moi cua ban la: ");
                        for (int i = 0; i < cols; i++) {
                            printf("%d ", Arr[i]);
                        }
                        printf("\n");
                        break;
                    case 6:
                        for (int i = 0; i < cols - 1; i++) {
                            for (int j = i + 1; j < cols; j++) {
                                if (Arr[i] > Arr[j]) {
                                    int temp = Arr[i];
                                    Arr[i] = Arr[j];
                                    Arr[j] = temp;
                                }
                            }
                        }
                        printf("\nMang sau khi sap xep tang dan: ");
                        for (int i = 0; i < cols; i++) {
                            printf("%d ", Arr[i]);
                        }
                        printf("\n");
                        break;
                    case 7:
                        printf("\nNhap vao phan tu muon kiem tra: ");
                        scanf("%d", &value);
                        dem = 0;
                        for (int i = 0; i < cols; i++) {
                            if (Arr[i] == value) {
                                dem++;
                                break;
                            }
                        }
                        if (dem != 0) {
                            printf("Phan tu %d co trong mang\n", value);
                        } else {
                            printf("Phan tu khong co trong mang\n");
                        }
                        printf("\n");
                        break;
                    case 8:
                        printf("\nCac so nguyen to trong mang da duoc binh phuong la: ");
                        for (int i = 0; i < cols; i++) {
                            int flag = 1;
                            if (Arr[i] < 2) {
                                flag = 0;
                            } else {
                                for (int j = 2; j <= sqrt(Arr[i]); j++) {
                                    if (Arr[i] % j == 0) {
                                        flag = 0;
                                        break;
                                    }
                                }
                            }
                            if (flag == 1) {
                                printf("%d ", Arr[i] * Arr[i]);
                            }
                        }
                        printf("\n");
                        break;
                    case 9:
                        for (int i = 0; i < cols - 1; i++) {
                            for (int j = i + 1; j < cols; j++) {
                                if (Arr[i] < Arr[j]) {
                                    int temp = Arr[i];
                                    Arr[i] = Arr[j];
                                    Arr[j] = temp;
                                }
                            }
                        }
                        printf("\nMang sau khi sap xep giam dan: ");
                        for (int i = 0; i < cols; i++) {
                            printf("%d ", Arr[i]);
                        }
                        printf("\n");
                        break;
                    case 10:
                        return 0;
                    default:
                        printf("Lua chon khong hop le.\n");
                        break;
                }
            }
        } else {
            return 0;
        }
    }
    printf("Hello world!\n");
    return 0;
}
