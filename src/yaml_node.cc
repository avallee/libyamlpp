#include "yaml_node.hh"

using namespace std;
namespace yml{

    // Scalar implementation
    Scalar::Scalar(): value("")
    {
    }
    Scalar::Scalar(string v): value(v)
    {
    }

    string Scalar::dump()
    {
        return value;
    }

    //Sequence implementation
    Sequence::Sequence()
    {
    }

    string Sequence::dump()
    {
        return "Sequence unimplemented!";
    }

    // Mapping implementation
    Mapping::Mapping()
    {

    }

    string Mapping::dump()
    {
        return "Mapping unimplemented!";
    }
}
