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

TEST(Scalar, Type)
{

    Scalar s;

    EXPECT_EQ("Scalar", s.type());
}


TEST(DISABLED_SequenceCtor, Empty)
{
    Sequence s;

    EXPECT_EQ("", s.dump());
}
TEST(Sequence, Type)
{

    Sequence s;

    EXPECT_EQ("Sequence", s.type());
}

TEST(DISABLED_MappingCtor, Empty)
{
    Mapping m;

    EXPECT_EQ("", m.dump());
}
TEST(Mapping, Type)
{

    Mapping m;

    EXPECT_EQ("Mapping", m.type());
}
