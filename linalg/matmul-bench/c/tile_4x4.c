
#include <stddef.h>

void c_tile_4x4(size_t m, size_t k, size_t n, float *a, float *b, float *c) {
    for(size_t row = 0 ; row < m / 4 ; row++) {
        for(size_t col = 0 ; col < n / 4 ; col++) {
            float  sum00 = 0.0;
            float  sum01 = 0.0;
            float  sum02 = 0.0;
            float  sum03 = 0.0;
            float  sum10 = 0.0;
            float  sum11 = 0.0;
            float  sum12 = 0.0;
            float  sum13 = 0.0;
            float  sum20 = 0.0;
            float  sum21 = 0.0;
            float  sum22 = 0.0;
            float  sum23 = 0.0;
            float  sum30 = 0.0;
            float  sum31 = 0.0;
            float  sum32 = 0.0;
            float  sum33 = 0.0;
            for(size_t i = 0; i < k ; i++) {
                float a0 = a[row * k + i];
                float a1 = a[(row + 1) * k + i];
                float a2 = a[(row + 2) * k + i];
                float a3 = a[(row + 3) * k + i];
                float b0 = b[i * n + col];
                float b1 = b[i * n + col + 1];
                float b2 = b[i * n + col + 2];
                float b3 = b[i * n + col + 3];
                sum00 += a0 * b0;
                sum01 += a0 * b1;
                sum02 += a0 * b2;
                sum03 += a0 * b3;
                sum10 += a1 * b0;
                sum11 += a1 * b1;
                sum12 += a1 * b2;
                sum13 += a1 * b3;
                sum20 += a2 * b0;
                sum21 += a2 * b1;
                sum22 += a2 * b2;
                sum23 += a2 * b3;
                sum30 += a3 * b0;
                sum31 += a3 * b1;
                sum32 += a3 * b2;
                sum33 += a3 * b3;
            }
            c[(row + 0) * n + col] = sum00;
            c[(row + 0) * n + col + 1] = sum01;
            c[(row + 0) * n + col + 2] = sum02;
            c[(row + 0) * n + col + 3] = sum03;
            c[(row + 1) * n + col] = sum10;
            c[(row + 1) * n + col + 1] = sum11;
            c[(row + 1) * n + col + 2] = sum12;
            c[(row + 1) * n + col + 3] = sum13;
            c[(row + 2) * n + col] = sum20;
            c[(row + 2) * n + col + 1] = sum21;
            c[(row + 2) * n + col + 2] = sum22;
            c[(row + 2) * n + col + 3] = sum23;
            c[(row + 3) * n + col] = sum30;
            c[(row + 3) * n + col + 1] = sum31;
            c[(row + 3) * n + col + 2] = sum32;
            c[(row + 3) * n + col + 3] = sum33;
        }
    }
}
