#include <stdio.h>
#include <math.h>

int main() {
    int i;
    int j;

    for (i = 0; i <= 1000; i+=5) {
        printf("%i\n", i);
    }

    for (j = 1; j <=1000; j++) {
        float x = (float)sqrt(j);
        printf("%f\n", x);
    }
}