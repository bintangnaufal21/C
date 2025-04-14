#include <stdio.h>

void main() {
    char grade;

    printf("Inputkan Grade:");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Luar Biasa");
        break;
    case 'B':
        printf("Bagus");
    break;
    case 'C':
        printf("Cukup");
        break;
    case 'D':
        printf("Oke");
        break;
    case 'E':
        printf("Remedi");
        break;
    case 'F':
        printf("Ngulang");
        break;
    default:
        printf("Grade Tidak Ada");
    }

}