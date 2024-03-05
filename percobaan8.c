#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

// fungsi dari titik yang diikuti angka pada kode diatas adalah untuk menampilkan akurasi berapa jumlah angka desimal yang diinginkan, 
// semisal kita memasukkan 1f maka yang keluar adalah 1 angka desimal, semisal 3f maka yang keluar adalah 3 angka desimal