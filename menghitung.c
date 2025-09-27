#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int angka, i, hasil;
    scanf("%i", &angka);
    for(i = 1; i <= 10; i++){
        hasil = angka * i;
        printf("%i x %i = %i\n", angka, i, hasil);
    }
    return 0;
}