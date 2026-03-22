#include <stdio.h>
 
void transposeMatriks(int m[3][3], int hasil[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            hasil[j][i] = m[i][j];
}
 
void cetakMatriks(int m[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%4d", m[i][j]);
        printf("\n");
    }
}
 
int main() {
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int t[3][3];
    printf("Matriks Asli:\n"); cetakMatriks(m);
    transposeMatriks(m, t);
    printf("Transpose:\n"); cetakMatriks(t);
    return 0;
}
