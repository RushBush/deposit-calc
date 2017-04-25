#include "../src/deposit.c"
#include "../thirdparty/ctest.h"
#include "../src/deposit.h"

CTEST(deposit, test1)
{
    float sum=15020;
    float result = calc(25, sum);
    float expected = sum*0.9;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(deposit, test2)
{
    float sum=10420;
    float result = calc(36, sum);
    float expected = sum*1.02;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(deposit, test3)
{
    float sum=15200;
    float result = calc(125, sum);
    float expected = sum*1.06;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(deposit, test4)
{
    float sum=16500;
    float result = calc(250, sum);
    float expected = sum*1.12;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(deposit, test5)
{
    float sum=124640;
    float result = calc(25, sum);
    float expected = sum*0.9;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(deposit, test6)
{
    float sum=174320;
    float result = calc(36, sum);
    float expected = sum*1.03;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(deposit, test7)
{
    float sum=152700;
    float result = calc(125, sum);
    float expected = sum*1.08;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(deposit, test8)
{
    float sum=154320;
    float result = calc(250, sum);
    float expected = sum*1.15;
    ASSERT_DBL_NEAR(expected, result);
}


