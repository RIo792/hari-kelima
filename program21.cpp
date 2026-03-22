#include <stdio.h>
 
void desimalKeBiner(int n, int hasil[], int *panjang) {
    int i = 0;
    if (n == 0) { hasil[0] = 0; *panjang = 1; return; }
    while (n > 0) {
        hasil[i++] = n % 2;
        n /= 2;
    }
    *panjang = i;
}
 
void cetakBiner(int hasil[], int panjang) {
    int i;
    for (i = panjang - 1; i >= 0; i--) printf("%d", hasil[i]);
    printf("\n");
}
 
int main() {
    int hasil[32], panjang;
    desimalKeBiner(45, hasil, &panjang);
    printf("45 dalam biner = "); cetakBiner(hasil, panjang);
    desimalKeBiner(255, hasil, &panjang);
    printf("255 dalam biner = "); cetakBiner(hasil, panjang);
    return 0;
}
