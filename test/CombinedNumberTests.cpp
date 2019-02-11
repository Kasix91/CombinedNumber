#include <gtest/gtest.h>
#include <list>
#include "CombinedNumber.hpp"

struct CombinedNumberTests : public ::testing::Test
{
};



TEST_F(CombinedNumberTests, when1IsGivenStringIsReturned)
{

    CombinedNumber cn;
    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result, "1");
}
