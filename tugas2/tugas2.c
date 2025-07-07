#include <stdio.h>

int main() {
    int nilai[5];
    int *ptr; // pointer untuk array
    int i;
    int max, min;
    float jumlah = 0, rata_rata;

    // Input: Meminta pengguna memasukkan 5 nilai ujian
    printf("Masukkan 5 nilai ujian:\n");
    for (i = 0; i < 5; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Pointer mengarah ke array nilai
    ptr = nilai;

    // Inisialisasi nilai maksimum dan minimum
    max = min = *ptr;

    // Proses: Menghitung jumlah, mencari nilai tertinggi dan terendah
    for (i = 0; i < 5; i++) {
        jumlah += *(ptr + i); // Akses menggunakan pointer

        if (*(ptr + i) > max)
            max = *(ptr + i);

        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    rata_rata = jumlah / 5.0;

    // Output
    printf("\n=== Hasil Analisis Nilai Ujian ===\n");
    printf("Nilai Tertinggi : %d\n", max);
    printf("Nilai Terendah  : %d\n", min);
    printf("Rata-rata       : %.2f\n", rata_rata);

    return 0;
}
