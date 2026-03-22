#include <stdio.h>
 
void insertionSort(int arr[], int n) {
    int i, j, kunci;
    for (i = 1; i < n; i++) {
        kunci = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > kunci) { arr[j+1] = arr[j]; j--; }
        arr[j + 1] = kunci;
    }
}
 
int binarySearch(int arr[], int n, int target) {
    int kiri = 0, kanan = n - 1, tengah;
    while (kiri <= kanan) {
        tengah = (kiri + kanan) / 2;
        if (arr[tengah] == target) return tengah;
        else if (arr[tengah] < target) kiri = tengah + 1;
        else kanan = tengah - 1;
    }
    return -1;
}
 
int main() {
    int data[8] = {50, 10, 30, 70, 20, 60, 40, 80};
    insertionSort(data, 8);
    int idx = binarySearch(data, 8, 60);
    if (idx != -1) printf("60 ditemukan di indeks %d (array terurut)\n", idx);
    return 0;
}
