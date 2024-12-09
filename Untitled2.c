#include <stdio.h>
#include <stdlib.h>

// H�m d? nh?p m?ng 2 chi?u
void nhapMang(int a[10][10], int *n) {
    printf("Nhap kich co cua mang (n x n): ");
    scanf("%d", n);
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// H�m in m?ng theo d?ng ma tr?n
void inMang(int a[10][10], int n) {
    printf("Gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// H�m in ra c�c ph?n t? n?m tr�n du?ng bi�n v� t�nh t�ch
void bienVaTich(int a[10][10], int n) {
    int tich = 1;
    printf("Cac phan tu tren duong bien:\n");
    for (int i = 0; i < n; i++) {
        // In c�c ph?n t? d?u v� cu?i d�ng
        tich *= a[i][0];
        printf("%d ", a[i][0]);
        tich *= a[i][n-1];
        printf("%d ", a[i][n-1]);
    }
    for (int j = 1; j < n-1; j++) {
        // In c�c ph?n t? d?u v� cu?i c?t tr? g�c
        tich *= a[0][j];
        printf("%d ", a[0][j]);
        tich *= a[n-1][j];
        printf("%d ", a[n-1][j]);
    }
    printf("\nTich cac phan tu tren duong bien: %d\n", tich);
}

// H�m in c�c ph?n t? tr�n du?ng ch�o ch�nh
void duongCheoChinh(int a[10][10], int n) {
    printf("Cac phan tu tren duong cheo chinh:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\n");
}

// H�m in c�c ph?n t? tr�n du?ng ch�o ph?
void duongCheoPhu(int a[10][10], int n) {
    printf("Cac phan tu tren duong cheo phu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][n-i-1]);
    }
    printf("\n");
}

// H�m s?p x?p du?ng ch�o ph? theo th? t? tang d?n
void sapXepDuongCheoPhu(int a[10][10], int n) {
    int temp;
    // S?p x?p c�c ph?n t? tr�n du?ng ch�o ph?
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            // Ho�n d?i n?u ph?n t? t?i du?ng ch�o ph? a[i][n-i-1] > a[j][n-j-1]
            if (a[i][n-i-1] > a[j][n-j-1]) {
                temp = a[i][n-i-1];
                a[i][n-i-1] = a[j][n-j-1];
                a[j][n-j-1] = temp;
            }
        }
    }
    printf("Da sap xep duong cheo phu theo thu tu tang dan.\n");
}

// H�m t�m ki?m m?t ph?n t? v� in ra v? tr�
void timKiemPhanTu(int a[10][10], int n, int x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == x) {
                printf("Phan tu %d duoc tim thay tai vi tri a[%d][%d].\n", x, i, j);
                return;
            }
        }
    }
    printf("Phan tu %d khong co trong mang.\n", x);
}

int main() {
    int a[10][10], n, x, choice;

    do {
        // Hi?n th? menu
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu tren duong bien va tinh tich\n");
        printf("4. In ra cac phan tu tren duong cheo chinh\n");
        printf("5. In ra cac phan tu tren duong cheo phu\n");
        printf("6. Sap xep duong cheo phu theo thu tu tang dan\n");
        printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                nhapMang(a, &n);
                break;
            case 2:
                inMang(a, n);
                break;
            case 3:
                bienVaTich(a, n);
                break;
            case 4:
                duongCheoChinh(a, n);
                break;
            case 5:
                duongCheoPhu(a, n);
                break;
            case 6:
                sapXepDuongCheoPhu(a, n);
                break;
            case 7:
                printf("Nhap phan tu can tim: ");
                scanf("%d", &x);
                timKiemPhanTu(a, n, x);
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 8);  // Chuong tr�nh s? ti?p t?c ch?y cho d?n khi ch?n tho�t
    return 0;
}

