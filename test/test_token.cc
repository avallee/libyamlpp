#include <gtest/gtest.h>
#include "../src/token.hh"

using namespace yaml;
using namespace yaml::lex;

TEST(Token, TokenDefaultConstructor)
{
    token t;
    EXPECT_EQ(token::EOS, t.tag);
}

TEST(Token, TokenLexicalTagConstructor)
{
    token t(token::FLOW_SEQUENCE_BEGIN);
    EXPECT_EQ(token::FLOW_SEQUENCE_BEGIN, t.tag);
}
