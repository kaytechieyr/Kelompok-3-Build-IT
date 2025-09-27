#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float jarak;
    scanf("%f", &jarak);
    float waktu;
    scanf("%f", &waktu);
    printf("%.3f", jarak / waktu);
    return 0;
}
