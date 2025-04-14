#include <stdio.h>

int main(){
    int angka1 = 5;
    int angka2 = 2;

    printf("%d\n", angka1);
    printf("%d\n", angka2);


    //* Aritmatika
    /*  printf("Hasil dari penjumlahan %d + %d = %d\n ", angka1, angka2, angka1 + angka2);
    printf("Hasil dari pengurangan %d - %d = %d\n ", angka1, angka2, angka1 - angka2);
    printf("Hasil dari perkalian %d * %d = %d\n ", angka1, angka2, angka1 * angka2);
    printf("Hasil dari pembagian %d / %d = %.2f\n ", angka1, angka2, (float)angka1 / angka2);
    printf("Hasil dari modulus %d %% %d = %d\n ", angka1, angka2, angka1 % angka2);  */
     //* Penugasan
   /*  printf("hasil angka1 += angka2  adalah %d\n", angka1 += angka2);
    printf("hasil angka1 -= angka2  adalah %d\n", angka1 -= angka2);
    printf("hasil angka1 *= angka2  adalah %d\n", angka1 *= angka2);
    printf("hasil angka1 /= angka2  adalah %d\n", angka1 /= angka2);
    printf("hasil angka1 %%= angka2  adalah %d\n", angka1 %= angka2); */
    //* Operator pembanding
    int c = 5;
    printf("%d > %d = %d \n", angka1,angka2, angka1 > angka2);
    printf("%d < %d = %d \n", angka1,angka2, angka1 < angka2);
    printf("%d == %d = %d \n", angka1,angka2, angka1 == angka2);
    printf("%d == %d = %d \n", angka1,c, angka1 == c);
}