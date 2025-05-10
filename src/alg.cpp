// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value <= 1) {
    return false;
  }
  if (value == 2) {
    return true;
  }
  if (value % 2 == 0) {
    return false;
  } else {
    for (int i = 3; i < value; i += 2) {
      if (value % i == 0) {
          return false;
        }
      }
    }
    return true;
  }

uint64_t nPrime(uint64_t n) {
    uint64_t number = 1;
    uint64_t value = 2;
    while (number < n) {
      value++;
      if (checkPrime(value)) {
        number++;
      }
    }
    return value;
  }

uint64_t nextPrime(uint64_t value) {
    uint64_t new_number = value;
    bool flag = true;
    while (flag) {
      new_number++;
      if (checkPrime(new_number)) {
        flag = false;
      }
    }
    return new_number;
  }

uint64_t sumPrime(uint64_t hbound) {
    uint64_t value = 2;
    uint64_t sum = 0;
    while (value < hbound) {
      if (checkPrime(value)) {
        sum += value;
      }
      value++;
    }
    return sum;
  }
