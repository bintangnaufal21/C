#include <stdio.h>

void main(){

    char ulangi ='y';
    int counter = 0;

    //!perulangan while
    while(ulangi == 'y')
    {
        printf("Apakah kamu mau mengulang?\n");
        printf(" Jawab (y/N): ");
        scanf(" %c", &ulangi);
        
        //!increment counter
        counter++;
    }

    printf("\n\n-------\n");
    printf("Perulangan selesai\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
}