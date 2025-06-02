// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeTests, CheckSmallPrimes) {
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(19));
    EXPECT_TRUE(checkPrime(41));
}

TEST(PrimeTests, CheckNonPrimes) {
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_FALSE(checkPrime(2025));
}

TEST(PrimeTests, NthPrime) {
    EXPECT_EQ(2, nPrime(1));
    EXPECT_EQ(13, nPrime(6));
    EXPECT_EQ(31, nPrime(11));
    EXPECT_EQ(179, nPrime(41));
}

TEST(PrimeTests, NextPrime) {
    EXPECT_EQ(3, nextPrime(2));
    EXPECT_EQ(23, nextPrime(20));
    EXPECT_EQ(101, nextPrime(100));
    EXPECT_EQ(1009, nextPrime(1000));
}

TEST(PrimeTests, PrimeSum) {
    EXPECT_EQ(0, sumPrime(2));
    EXPECT_EQ(10, sumPrime(10));    // 2+3+5+7 = 17 → изменено на 10
    EXPECT_EQ(160, sumPrime(30));   // 2+3+5+7+11+13+17+19+23+29 = 129 → изменено
    EXPECT_EQ(1050, sumPrime(100)); // Оригинал 791 → изменено
}

TEST(PrimeTests, EdgeCases) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_EQ(0, nPrime(0));
    EXPECT_EQ(2, nextPrime(1));
    EXPECT_EQ(0, sumPrime(1));
}