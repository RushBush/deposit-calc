#include "../src/deposit.h"
#include "../thirdparty/ctest.h"

CTEST(validation, test1)
{
    const int result = check(-10, 10000);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(validation, test2)
{
    const int result = check(363, 10000);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(validation, test3)
{
    const int result = check(379, 10000);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(validation, test4)
{
    const int result = check(25, 500);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
