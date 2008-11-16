#include "types.hh"
#include <iostream>
#include <tr1/memory>
#include <yaml_node.hh>

using namespace std;
using namespace tr1;
void type_demo()
{
    typedef shared_ptr<yml::Node> node_ptr;

    cout << "--- TYPE_DEMO SECTION ---" <<endl;

    node_ptr node[4];
    node[0] = node_ptr(new yml::Scalar());
    node[1] = node_ptr(new yml::Scalar("Hi there"));
    node[2] = node_ptr(new yml::Sequence());
    node[3] = node_ptr(new yml::Mapping());
    cout << node[0]->dump() <<endl;
    cout << node[1]->dump() <<endl;
    cout << node[2]->dump() <<endl;
    cout << node[3]->dump() <<endl;

}
