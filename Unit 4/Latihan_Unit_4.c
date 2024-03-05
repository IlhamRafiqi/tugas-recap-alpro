#include <stdio.h>

// Fungsi untuk menghitung keliling persegi
float hitungKelilingPersegi(float sisi) {
    return 4 * sisi;
}

// Fungsi untuk menghitung luas persegi
float hitungLuasPersegi(float sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung volume kubus
float hitungVolumeKubus(float sisi) {
    return sisi * sisi * sisi;
}

int main() {
    // Deklarasi variabel
    float sisi;

    // Meminta input panjang sisi dari pengguna
    printf("Masukkan panjang sisi (dalam satuan yang sama): ");
    scanf("%f", &sisi);

    // Menghitung keliling, luas, dan volume menggunakan fungsi
    float keliling = hitungKelilingPersegi(sisi);
    float luas = hitungLuasPersegi(sisi);
    float volume = hitungVolumeKubus(sisi);

    // Menampilkan hasil perhitungan
    printf("Keliling Persegi: %.2f\n", keliling);
    printf("Luas Persegi: %.2f\n", luas);
    printf("Volume Kubus: %.2f\n", volume);

    return 0;
}