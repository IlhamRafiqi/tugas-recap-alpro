#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};
    // MAX_PERSONS dan MAX_NAME_LENGTH adalah konstanta yang mendefinisikan jumlah orang (3) dan panjang maksimum nama (20).
    // names adalah array 2D yang menyimpan nama-nama orang dengan maksimum MAX_PERSONS orang dan panjang nama MAX_NAME_LENGTH.
    // ages adalah array yang menyimpan umur masing-masing orang.

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }
    // Mencetak header "Name" dan "Age" dengan format tabel.
    // Melakukan loop sebanyak MAX_PERSONS kali untuk setiap orang.
    // Mencetak nama dan umur setiap orang dalam format tertentu.

    return 0;
}