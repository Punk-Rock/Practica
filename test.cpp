#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
TEST_CASE("test case 1")
{
	CHECK(sum_pos(4, 2) == 0);
}