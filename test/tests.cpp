#include <cstdint>
#include "alg.h"

TEST(checkPrimeTest, isPrime) {
  EXPECT_TRUE(checkPrime(29));
}

TEST(checkPrimeTest, isNotPrime) {
  EXPECT_FALSE(checkPrime(25));
}

TEST(nPrimeTest, firstPrime) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(nPrimeTest, fifthPrime) {
  EXPECT_EQ(nPrime(5), 11);
}

TEST(nPrimeTest, tenthPrime) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(nextPrimeTest, nextAfterFour) {
  EXPECT_EQ(nextPrime(4), 5);
}

TEST(nextPrimeTest, nextAfterEleven) {
  EXPECT_EQ(nextPrime(11), 13);
}

TEST(nextPrimeTest, nextAfterTwenty) {
  EXPECT_EQ(nextPrime(20), 23);
}

TEST(sumPrimeTest, sumBelowTen) {
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(sumPrimeTest, sumBelowTwenty) {
  EXPECT_EQ(sumPrime(20), 77);
}
