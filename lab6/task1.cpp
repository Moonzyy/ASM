#include <stdio.h>

extern "C" int function(int x);

int main() {
    printf("%d\n", function(18));
    printf("%d\n", function(3));
    return 0;
}