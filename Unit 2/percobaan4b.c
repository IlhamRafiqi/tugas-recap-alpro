#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
    // Ini adalah loop luar yang mengontrol bilangan utama (i). 
    // Loop ini akan berjalan selama nilai i kurang dari atau sama dengan 3 dan akan meningkatkan nilai i setiap iterasi.
        printf("Bilangan utama: %d\n", i);
    
        for (j = 1; j <= 2; ++j) {
        // Ini adalah loop dalam yang mengontrol bilangan pengali (j). 
        // Loop ini akan berjalan selama nilai j kurang dari atau sama dengan 2 dan akan meningkatkan nilai j setiap iterasi.
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        // Menampilkan nilai bilangan pengali (j) di layar.
        // Menghitung dan menampilkan hasil perkalian (j * i).
    }
    // Loop dalam selesai, dan nilai bilangan utama (i) ditingkatkan untuk iterasi selanjutnya dari loop luar.
    // Selanjutnya, program akan kembali ke loop luar dan melakukan hal yang sama hingga nilai bilangan utama i lebih dari 3. Program kemudian selesai.
    return 0;
}

