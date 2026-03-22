#include <stdio.h>
 
void merge(int arr[], int kiri, int tengah, int kanan) {
    int i, j, k;
    int n1 = tengah - kiri + 1, n2 = kanan - tengah;
    int L[50], R[50];
    for (i = 0; i < n1; i++) L[i] = arr[kiri + i];
    for (j = 0; j < n2; j++) R[j] = arr[tengah + 1 + j];
    i = 0; j = 0; k = kiri;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
 
void mergeSort(int arr[], int kiri, int kanan) {
    if (kiri < kanan) {
        int tengah = (kiri + kanan) / 2;
        mergeSort(arr, kiri, tengah);
        mergeSort(arr, tengah + 1, kanan);
        merge(arr, kiri, tengah, kanan);
    }
}
 
void cetakArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}
 
int main() {
    int data[8] = {38, 27, 43, 3, 9, 82, 10, 1};
    printf("Sebelum: "); cetakArray(data, 8);
    mergeSort(data, 0, 7);
    printf("Sesudah: "); cetakArray(data, 8);
    return 0;
}
