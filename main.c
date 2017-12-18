#include <immintrin.h>
#include <stdio.h>

#define ARRAY_LENGTH 8

int main(int argc, char* argv[]) {

    __m256i first = _mm256_set_epi32(10, 20, 30, 40, 50, 60, 70, 80);
    __m256i second = _mm256_set_epi32(5, 5, 5, 5, 5, 5, 5, 5);
    __m256i result = _mm256_add_epi32(first, second);

    int* values = (int*) &result;

    for (
        unsigned short i = 0;
        i < ARRAY_LENGTH;
        i += 1
    ) {
        printf("%d ", values[i]);
    }

    return 0;
}
