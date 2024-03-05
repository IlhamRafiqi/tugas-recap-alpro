#include <stdio.h>

int main() {
    int i = 2, j;

    // Variabel i digunakan sebagai bilangan utama, dan j sebagai bilangan pengali. i diinisialisasi dengan nilai 2.

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);
        // Ini adalah loop dalam yang akan berjalan selama nilai j kurang dari atau sama dengan 2. Loop ini mengontrol bilangan pengali.
        // Menampilkan nilai bilangan pengali (j) di layar.
        // Menghitung dan menampilkan hasil perkalian (j * i).
        // Loop ini akan diulangi selama nilai j kurang dari atau sama dengan 2.

        i++;
        // Meningkatkan nilai bilangan utama (i) untuk iterasi selanjutnya.
    } while (i <= 3);
    // Ini adalah loop luar yang akan berjalan selama nilai i kurang dari atau sama dengan 3. Loop ini mengontrol bilangan utama.

    return 0;
    // Selanjutnya, program akan kembali ke loop luar dan melakukan hal yang sama hingga nilai bilangan utama i lebih dari 3. Program kemudian selesai.
}

