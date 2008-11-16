#include <yaml_node.hh>
#include <gtest/gtest.h>

#include <string>

using namespace std;
using namespace yml;

TEST(ScalarCtor, Empty)
{
    Scalar s;

    EXPECT_EQ("", s.dump());
}
TEST(ScalarCtor, OneString)
{
    string str = "Hello, there!";

    Scalar s(str);

    EXPECT_EQ(str, s.dump());
}
