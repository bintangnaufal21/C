#include <stdio.h>

int main() {
    int angka1, angka2;

  
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    printf("\nHasil operasi aritmatika:\n");
    printf("Penjumlahan (%d + %d) = %d\n", angka1, angka2, angka1 + angka2);
    printf("Pengurangan (%d - %d) = %d\n", angka1, angka2, angka1 - angka2);
    printf("Perkalian (%d * %d) = %d\n", angka1, angka2, angka1 * angka2);

    //* jika variabel angka2 berupa nilai "0"
    if (angka2 != 0) {
        printf("Pembagian (%d / %d) = %d\n", angka1, angka2, angka1 / angka2);
        printf("Modulus (%d %% %d) = %d\n", angka1, angka2, angka1 % angka2);
    } else {
        printf("Pembagian dan modulus tidak dapat dilakukan karena angka kedua adalah nol.\n");
    }

 
    printf("\nHasil operasi pembanding:\n");
    printf("%d > %d = %d\n", angka1, angka2, angka1 > angka2);
    printf("%d < %d = %d\n", angka1, angka2, angka1 < angka2);
    printf("%d == %d = %d\n", angka1, angka2, angka1 == angka2);
    printf("%d != %d = %d\n", angka1, angka2, angka1 != angka2);

    return 0;
}
