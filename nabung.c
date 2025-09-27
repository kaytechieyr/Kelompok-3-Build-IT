#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B;
    int jumlah = 0; 
    if (scanf("%d %d", &A, &B) != 2) {
        return 1;  
    }
    for (int i = A; i <= B; i++) {
        jumlah += i;
    }
    printf("%i\n", jumlah);
    return 0;
}
