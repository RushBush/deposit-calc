#include "../thirdparty/ctest.h"

CTEST(suite2, test1) {
    float result = calc(25, 10000);
    float expected = 9000;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite2, test2) {
    float result = calc(100, 15000);
    float expected = 15300;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite2, test3) {
    float result = calc(150, 20000);
    float expected = 21200;
    ASSERT_EQUAL(expected, result);
}
CTEST(suite2, test4) {
    float result = calc(300, 30000);
    float expected = 33600;
    ASSERT_EQUAL(expected, result);
}
CTEST(suite2, test5) {
    float result = calc(25, 100000);
    float expected = 90000;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite2, test6) {
    float result = calc(100, 150000);
    float expected = 154500;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite2, test7) {
    float result = calc(150, 200000);
    float expected = 216000;
    ASSERT_EQUAL(expected, result);
}
CTEST(suite2, test8) {
    float result = calc(300, 300000);
    float expected = 345000;
    ASSERT_EQUAL(expected, result);
}
