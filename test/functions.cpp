#include <my_func/my_func.h>

#include <gtest/gtest.h>

//tests for fibonacci 
TEST(functions1, TestIntegerOne)
{
    const auto expected = 0;
    const auto actual = fib(1);
    ASSERT_EQ(expected, actual);
}

TEST(functions2, TestIntegerTen)
{
    const auto expected = 34;
    const auto actual = fib(10);
    ASSERT_EQ(expected, actual);
}

TEST(functions3, TestIntegerSix)
{
    const auto expected = 5;
    const auto actual = fib(6);
    ASSERT_EQ(actual, expected);
}

//tests for isPrime
TEST(functions4, TestIntegerOne)
{
    const auto expected = 0;
    const auto actual = isPrime(1);
    ASSERT_EQ(expected, actual);
}

TEST(functions5, TestIntegerTen)
{
    const auto expected = 0;
    const auto actual = isPrime(10);
    ASSERT_EQ(expected, actual);
}

TEST(functions6, TestIntegerFive)
{
    const auto expected = 1;
    const auto actual = isPrime(5);
    ASSERT_EQ(actual, expected);
}

//tests for isPowerOf2

TEST(functions7, TestIntegerOne)
{
    const auto expected = 1;
    const auto actual = isPowerOf2(1);
    ASSERT_EQ(expected, actual);
}

TEST(functions8, TestIntegerTen)
{
    const auto expected = 0;
    const auto actual = isPowerOf2(10);
    ASSERT_EQ(expected, actual);
}

TEST(functions9, TestIntegerEight)
{
    const auto expected = 1;
    const auto actual = isPowerOf2(8);
    ASSERT_EQ(actual, expected);
}

//tests for hamming weight
TEST(functions10, TestIntegerOne)
{
    const auto expected = 1;
    const auto actual = HammingWeight(1);
    ASSERT_EQ(expected, actual);
}

TEST(functions11, TestIntegerTen)
{
    const auto expected = 2;
    const auto actual = HammingWeight(10);
    ASSERT_EQ(expected, actual);
}

TEST(functions12, TestIntegerSeven)
{
    const auto expected = 3;
    const auto actual = HammingWeight(7);
    ASSERT_EQ(actual, expected);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
