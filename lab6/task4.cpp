#include <stdio.h>

extern "C" double function();

int main() {
    printf("%f\n", function());
    return 0;
}