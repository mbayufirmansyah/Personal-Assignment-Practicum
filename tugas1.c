#include <stdio.h>

int main() {
    int a, b, c;
    int jumlah, selisih, perkalian;
    float pembagian, rata_rata;

    // Input
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    printf("Masukkan bilangan ketiga: ");
    scanf("%d", &c);

    // Operasi Aritmatika
    jumlah = a + b + c;
    selisih = a - b - c;
    perkalian = a * b * c;

    // Pembagian menggunakan float agar hasil desimal
    pembagian = (float)a / b / c;

    // Rata-rata
    rata_rata = jumlah / 3.0;

    // Output
    printf("\n=== Hasil Perhitungan ===\n");
    printf("Penjumlahan      : %d + %d + %d = %d\n", a, b, c, jumlah);
    printf("Pengurangan      : %d - %d - %d = %d\n", a, b, c, selisih);
    printf("Perkalian        : %d * %d * %d = %d\n", a, b, c, perkalian);
    printf("Pembagian        : %d / %d / %d = %.2f\n", a, b, c, pembagian);
    printf("Rata-rata        : (%.2f)\n", rata_rata);

    return 0;
}
