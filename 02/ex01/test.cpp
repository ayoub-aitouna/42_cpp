#include <stdio.h>

int getExponent(float f) {
    int* intPtr = (int*) &f;
    int bits = *intPtr;
    int exponentBits = (bits >> 23) & 0xFF;
    int exponent = exponentBits - 127;
    return exponent;
}

int main() {
    float f = 0.130f;
    int exponent = getExponent(f);
    printf("Exponent: %d\n", exponent);
    return 0;
}

