// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeTest, CheckPrimeTrue) {
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(13));
    EXPECT_TRUE(checkPrime(29));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(97));
}

TEST(PrimeTest, CheckPrimeFalse) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(15));
    EXPECT_FALSE(checkPrime(100));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(0));
}

TEST(PrimeTest, NthPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(20), 71);
    EXPECT_EQ(nPrime(25), 97);
}

TEST(PrimeTest, NextPrime) {
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(14), 17);
    EXPECT_EQ(nextPrime(20), 23);
    EXPECT_EQ(nextPrime(97), 101);
    EXPECT_EQ(nextPrime(100), 101);
}

TEST(PrimeTest, SumPrime) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
    EXPECT_EQ(sumPrime(30), 129);
    EXPECT_EQ(sumPrime(50), 328);
    EXPECT_EQ(sumPrime(100), 1060);
}
