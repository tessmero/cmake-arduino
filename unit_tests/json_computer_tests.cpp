#include "../json_computer.h"

#include <gtest/gtest.h>

class JsonComputerTests : public ::testing::Test
{
};

TEST_F(JsonComputerTests, square )
{
  char json_in[] = "{sum:[{\"square\":6}}";

  int res = compute(json_in);

  EXPECT_EQ(res, 36 );

}

TEST_F(JsonComputerTests, nosquare )
{
  char json_in[] = "{sum:[{\"no-square\":7}]}";

  int res = compute(json_in);

  EXPECT_EQ(res, 7 );

}

TEST_F(JsonComputerTests, complex )
{
  char json_in[] = "{sum:[{\"square\":4},{\"no-square\":4}]}";

  int res = compute(json_in);

  EXPECT_EQ(res, 20 );
}
