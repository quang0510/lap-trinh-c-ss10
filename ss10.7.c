#include <stdio.h>

int main() {
    int n, m;
    
    printf("Nhap so dong n : ");
    scanf("%d", &n);
    printf("Nhap so cot m : ");
    scanf("%d", &m);
    
    int arr[n][m];
    
    printf("Nhap cac phan tu cua mang :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
                if (arr[i][j] > arr[i][k]) {
            
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
