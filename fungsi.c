#include <stdio.h>

// Fungsi untuk mengecek apakah angka ganjil atau genap
void cekGanjilGenap(int angka) {
    if (angka % 2 == 0) {
        printf("%d adalah bilangan genap.\n", angka);
    } else {
        printf("%d adalah bilangan ganjil.\n", angka);
    }
}

int main() {
    int input;

    printf("Masukkan satu bilangan: ");
    scanf("%d", &input);

    cekGanjilGenap(input);

    return 0;
}
