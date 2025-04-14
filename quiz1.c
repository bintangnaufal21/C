#include <stdio.h>

int main()
{
    char name[50], jurusan[50], mata_kuliah[50];

    printf("Masukkan Nama: ");
    scanf(" %[^\n]", name);

    printf("Masukkan Jurusan: ");
    scanf(" %[^\n]", jurusan);

    printf("Masukkan Mata Kuliah: ");
    scanf(" %[^\n]", mata_kuliah);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan      : %s\n", name);
    printf("Jurusan yang diinputkan   : %s\n", jurusan);
    printf("Mata Kuliah yang diinputkan: %s\n", mata_kuliah);

    printf("%s\n", name);
    printf("%s\n", jurusan);
    printf("%s\n", mata_kuliah);

    return 0;
}