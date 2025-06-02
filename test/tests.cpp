// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, isPrime1) {
    uint64_t res = 3;
    EXPECT_TRUE(checkPrime(res));
}

TEST(st1, isPrime2) {
    uint64_t res = 17;
    EXPECT_TRUE(checkPrime(res));
}

TEST(st1, isPrime3) {
    uint64_t res = 397;
    EXPECT_TRUE(checkPrime(res));
}

TEST(st1, isNotPrime1) {
    uint64_t res = 500;
    EXPECT_FALSE(checkPrime(res));
}

TEST(st1, isNotPrime2) {
    uint64_t res = -3;
    EXPECT_FALSE(checkPrime(res));
}

TEST(st1, nPrime1) {
    uint64_t res = 3;
    uint64_t expected = 5;
    EXPECT_EQ(expected, nPrime(res));
}

TEST(st1, nPrime2) {
    uint64_t res = 15;
    uint64_t expected = 47;
    EXPECT_EQ(expected, nPrime(res));
}

TEST(st1, nPrime3) {
    uint64_t res = 35;
    uint64_t expected = 149;
    EXPECT_EQ(expected, nPrime(res));
}

TEST(st1, nPrime4) {
    uint64_t res = 168;
    uint64_t expected = 997;
    EXPECT_EQ(expected, nPrime(res));
}

TEST(st1, nextPrime1) {
    uint64_t res = 3;
    uint64_t expected = 5;
    EXPECT_EQ(expected, nextPrime(res));
}

TEST(st1, nextPrime2) {
    uint64_t res = 383;
    uint64_t expected = 389;
    EXPECT_EQ(expected, nextPrime(res));
}

TEST(st1, nextPrime3) {
    uint64_t res = 757;
    uint64_t expected = 761;
    EXPECT_EQ(expected, nextPrime(res));
}

TEST(st1, sumPrime1) {
    uint64_t res = sumPrime(10);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
    uint64_t res = sumPrime(30);
    uint64_t expected = 129;
    EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
    uint64_t res = sumPrime(80);
    uint64_t expected = 791;
    EXPECT_EQ(expected, res);
}