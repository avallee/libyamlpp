#include "yaml_node.hh"
#include <sstream>

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
        return "\""+value+"\"";
    }

    //Sequence implementation
    Sequence::Sequence()
    {
    }

    string Sequence::dump()
    {
        ostringstream os;
        bool first=true;
        os << "[";
        for(value_t::iterator i = values.begin(); i!=values.end(); ++i)
        {
            if(!first)
            {
                os<<", ";
            }
            os << (*i)->dump();
            first=false;
        }
        os<< "]";

        return os.str();

    }
    void Sequence::add(tr1::shared_ptr<Node> a)
    {
        values.push_back(a);
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
