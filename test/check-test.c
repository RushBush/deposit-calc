#include "../thirdparty/ctest.h"

CTEST(suite1, test1) {
    int result = check(25,10000);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite1, test2) {
    int result = check(20,1000);
    int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite1, test3) {
    int result = check(-10,15000);
    int expected = -1;
    ASSERT_EQUAL(expected, result);
}
CTEST(suite1, test4) {
    int result = check(369,15000);
    int expected = -1;
    ASSERT_EQUAL(expected, result);
}
CTEST(suite1, test5) {
    int result = check(365,15000);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
