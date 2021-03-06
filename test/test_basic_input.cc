#include "test_basic_input.hh"
#include "../src/event_handler.hh"
#include <tr1/memory>

using namespace std;
using namespace std::tr1;
using namespace yaml;
using namespace yaml::lex;

test_basic_input::test_basic_input(const string& input) :
    ss(input), s(ss), p(ss, shared_ptr<event_handler>(new event_handler()))
{
    token t = token::UNDEFINED;
    while( t != token::EOS ) {
        t = s.scan();
        scanned_tokens.push_back(t);
    }
}
