#include <stdio.h>

extern "C" double calc(double x, double i);

int main() {
    printf("%f\n", calc(10, 5));
    printf("%f\n", calc(10.23, 5));
    printf("%f\n", calc(2, 5));
    return 0;
}
