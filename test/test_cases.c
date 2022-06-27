//
// Troglobyte stdlib:
// author: Michael Gene Brockus
// mail: <mailto: michaelbrockus@gmail.com>
//
#include "troglobyte/package.h"
#include <unity.h>

//
//  project setup teardown functions if needed
//
void setUp(void)
{
    // TODO.
} // end of function setUp

void tearDown(void)
{
    // TODO.
} // end of function tearDown

//
// list of all the test cases for this project
//
static void test_simpleAssertTrue(void)
{
    TEST_ASSERT_TRUE(1);
} // end of test case

static void test_simpleAssertNull(void)
{
    TEST_ASSERT_NULL(NULL);
} // end of test case

static void test_simpleAssertCompare(void)
{
    int dummy = 3;
    TEST_ASSERT_EQUAL_INT(3, dummy);
} // end of test case

static void test_simpleAssertCall(void)
{
    TEST_ASSERT_EQUAL_STRING("Hello, C Developer.", greet());
} // end of test case

//
//  here main is used as the test runner
//
int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_simpleAssertTrue);
    RUN_TEST(test_simpleAssertNull);
    RUN_TEST(test_simpleAssertCall);
    RUN_TEST(test_simpleAssertCompare);

    return UNITY_END();
} // end of function main
