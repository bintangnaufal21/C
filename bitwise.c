#include <stdio.h>

int main(){
    int x = 5, y = 3; // 5 = 00000101, 3 = 00000011
     printf("\nOperator Bitwise:\n");
     printf("x & y = %d\n", x & y); // AND
     printf("x | y = %d\n", x | y); // OR
     printf("x ^ y = %d\n", x ^ y); // XOR
     printf("~x = %d\n", (unsigned char)~x); // NOT
     printf("x << 1 = %d\n", x << 1); // Left Shift
     printf("x >> 1 = %d\n", x >> 1); // Right Shift
}