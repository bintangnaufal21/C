#include <stdio.h>
int main(){

    int varint = 18;
    int varInt = 21;

    float varfloat = 3.33;
    float varFloat = 3.25;

    char varchar = 'b';
    char varcHar = 'B';

    double vardouble = 3.14592653;
    double vardoUble = 3.14593421;

    printf("Nilai varint: %d\n",varint);
    printf("Nilai varInt: %d\n",varInt);
    printf("Nilai varfloat: %.2f\n", varfloat);
    printf("Nilai varFloat: %.2f\n", varFloat);
    printf("Nilai varchar %c\n",varchar);
    printf("Nilai varcHar %c\n",varcHar);
    printf("Nilai vardouble %.10lf\n",vardouble);
    printf("Nilai vardoUble %.10lf\n",vardoUble);
    return 0;
}