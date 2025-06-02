// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrime(uint64_t num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    uint64_t max_div = static_cast<uint64_t>(std::sqrt(num)) + 1;
    for (uint64_t div = 3; div < max_div; div += 2) {
        if (num % div == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    if (n == 0) return 0;
    if (n == 1) return 2;
    
    uint64_t prime = 2;
    uint64_t count = 1;
    uint64_t candidate = 3;
    
    while (count < n) {
        if (checkPrime(candidate)) {
            prime = candidate;
            count++;
        }
        candidate += 2;
    }
    return prime;
}

uint64_t nextPrime(uint64_t start) {
    if (start < 2) return 2;
    uint64_t candidate = (start % 2 == 0) ? start + 1 : start + 2;
    
    while (true) {
        if (checkPrime(candidate)) {
            return candidate;
        }
        candidate += 2;
    }
}

uint64_t sumPrime(uint64_t limit) {
    if (limit <= 2) return 0;
    uint64_t total = 2;
    
    for (uint64_t num = 3; num < limit; num += 2) {
        if (checkPrime(num)) {
            total += num;
        }
    }
    return total;
}