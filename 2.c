#include <stdio.h>

int main(){

 /*    int age;
    printf("Masukkan Angka :");
    scanf("%d",&age);   
    printf("Usia Kamu Adalah :%d", age);
 */
// membuat variabel
    char name[20], web_address[30];

    printf("Nama: ");
    scanf("%s", &name);

    printf("Alamat web: ");
    scanf("%s", &web_address);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Web yang diinputkan: %s\n", web_address);
    
    return 0;
}