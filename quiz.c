#include <stdio.h>

void main(){
    int angka = 0;

    // perulangan while
    while(angka <= 10){
        printf("masukan angka\n");
        scanf(" %d", &angka);

        // increment counter
        angka++;
    }

    printf("\n\n----------\n");
    printf("Selesai\n");

}