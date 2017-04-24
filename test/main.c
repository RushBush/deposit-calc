#define CTEST_MAIN

#include "../src/deposit.c"
#include "../thirdparty/ctest.h"
#include "deposit-test.c"
#include "check-test.c"

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
