// Copyright 2025 UNN-CS
#include <cstdint>
#include <cmath>
#include "alg.h"

bool checkPrime(uint64_t num) {
  if (num < 2) return false;
  if (num == 2) return true;
  if (num % 2 == 0) return false;

  // Проверка делимости на малые простые числа
  const uint64_t small_primes[] = {
    3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
    43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
  };
  for (uint64_t p : small_primes) {
    if (num == p) return true;
    if (num % p == 0) return false;
  }

  // Оптимизированный перебор делителей
  uint64_t max_div = static_cast<uint64_t>(std::sqrt(num)) + 1;
  for (uint64_t div = 101; div < max_div; div += 2) {
    if (num % div == 0) {
      return false;
    }
  }
return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) return 0;
  if (n == 1) return 2;
  uint64_t count = 1;  // Уже учли первое простое число 2
  uint64_t candidate = 1;  // Начнем с нечетного числа
  while (count < n) {
    candidate += 2;
    if (checkPrime(candidate)) {
      count++;
    }
  }
return candidate;
}

uint64_t nextPrime(uint64_t start) {
  if (start < 2) return 2;
  if (start == 2) return 3;
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
  uint64_t total = 2;  // Учитываем 2
  // Перебор только нечетных чисел
  for (uint64_t num = 3; num < limit; num += 2) {
    if (checkPrime(num)) {
      total += num;
    }
  }
return total;
}
