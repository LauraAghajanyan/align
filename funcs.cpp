#include <iostream>
#include "Header.h"

int fib(int n) {
    int f = 0, s = 1, res = 0;
    for (int i = 1; i < n - 1; i++) {
        res = f + s;
        f = s;
        s = res;
    }
    return res;
}

bool isPrime(unsigned int n) {
    if (n == 1 || ((n % 2 == 0) && n != 2)) {
        return false;
    }

    for (int i = 3; i * i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPwrOf2(unsigned int n) {
    if (n == 0) {
        return false;
    }
    while (n % 2 == 0) {
        n /= 2;
    }
    if (n == 1) {
        return true;
    }
    return false;
}

int hammingWeight(uint32_t n) {
    unsigned int count = 0;
    for (int i = 0; i < 32; i++) {
        if (n % 2 == 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}