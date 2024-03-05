#include <stdio.h>

int main() {
    int i = 2, j = 1;
    // Variabel i diinisialisasi dengan nilai 2 sebagai bilangan utama, dan variabel j diinisialisasi dengan nilai 1 sebagai bilangan pengali.

    while (i <= 3) {
    // Ini adalah loop luar yang mengontrol bilangan utama (i). Loop ini akan berjalan selama nilai i kurang dari atau sama dengan 3.
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
        // Ini adalah loop dalam yang mengontrol bilangan pengali (j). Loop ini akan berjalan selama nilai j kurang dari atau sama dengan 2.
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
        // Loop dalam selesai, dan nilai bilangan utama (i) ditingkatkan untuk iterasi selanjutnya dari loop luar. Selain itu, nilai bilangan pengali (j) direset ke 1 untuk memulai kembali iterasi dalam.
    }
    // Selanjutnya, program akan kembali ke loop luar dan melakukan hal yang sama hingga nilai bilangan utama i lebih dari 3. Program kemudian selesai.
    return 0;
}
