#include <stdio.h>
 
void kaliMatriks(int a[3][3], int b[3][3], int hasil[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            hasil[i][j] = 0;
            for (k = 0; k < 3; k++)
                hasil[i][j] += a[i][k] * b[k][j];
        }
}
 
void cetakMatriks(int m[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%6d", m[i][j]);
        printf("\n");
    }
}
 
int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int hasil[3][3];
    kaliMatriks(a, b, hasil);
    printf("Hasil Perkalian Matriks:\n");
    cetakMatriks(hasil);
    return 0;
}

