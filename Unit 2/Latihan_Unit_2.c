#include <stdio.h>

int main() {
    int jumlahTransaksi, i, nominal, totalPengeluaran = 0;

    // Meminta jumlah transaksi
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlahTransaksi);

    // Pengecekan jumlah transaksi
    if (jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }

    // Meminta nominal transaksi dan menghitung total pengeluaran
    for (i = 1; i <= jumlahTransaksi; ++i) {
        printf("Masukkan nominal transaksi ke-%d: ", i);
        scanf("%d", &nominal);

        totalPengeluaran += nominal;
    }

    // Menampilkan total pengeluaran
    printf("Total pengeluaran hari ini: %d\n", totalPengeluaran);

    return 0;
}