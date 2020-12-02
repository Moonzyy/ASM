#include <stdio.h>

extern "C" double function(double x);

int main() {
    printf("%f\n", function(-2));
    printf("%f\n", function(0.5));
    return 0;
}