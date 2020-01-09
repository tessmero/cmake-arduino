#include "square.h"

#include <gtest/gtest.h>

class SquareTests : public ::testing::Test
{
};

TEST_F(SquareTests, five )
{
    int toSquare = 5;

    int = square(toSquare);

    EXPECT_EQ(res, 25 );

}

TEST_F(SquareTests, negative_six )
{
    int toSquare = -6;

    int res = square(toSquare);

    EXPECT_EQ(res, 36 );
}
