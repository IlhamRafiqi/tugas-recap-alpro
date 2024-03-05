#include <stdio.h>

int main() {
    // Deklarasi variabel
    int jumlahElemen, i, total = 0;

    // Meminta input jumlah elemen
    printf("Masukkan jumlah elemen pada array: ");
    scanf("%d", &jumlahElemen);

    // Pengecekan jumlah elemen
    if (jumlahElemen <= 0) {
        printf("Tidak ada elemen pada array\n");
        return 0;
    }

    // Mendeklarasikan array dengan ukuran sesuai jumlah elemen
    int array[jumlahElemen];

    // Meminta input nilai setiap elemen
    printf("Masukkan nilai setiap elemen:\n");
    for (i = 0; i < jumlahElemen; ++i) {
        printf("Elemen ke-%d: ", i + 1);
        scanf("%d", &array[i]);

        // Menambahkan nilai elemen ke total
        total += array[i];
    }

    // Menampilkan hasil penjumlahan
    printf("Hasil penjumlahan seluruh elemen: %d\n", total);

    return 0;
}