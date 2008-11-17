#ifndef YAML_NODE_HH_
#define YAML_NODE_HH_

#include <string>
#include <list>
#include <tr1/memory>

namespace yml{

    class Node
    {
    public:
        virtual ~Node(){};

        virtual std::string dump()=0;
        virtual std::string type()=0;
    };

    class Scalar : public Node
    {
        public:
        Scalar();
        Scalar(std::string v);
        std::string type(){return "Scalar";}
        std::string dump();

        private:
        std::string value;
    };

    // TODO: Stub sequence class
    class Sequence : public Node
    {
        public:
        Sequence();
        std::string type(){return "Sequence";}
        std::string dump();

        void add(std::tr1::shared_ptr<Node> a);

        private:
        typedef std::list< std::tr1::shared_ptr<Node> > value_t;
        value_t values;
    };

    // TODO: Stub mapping class
    class Mapping : public Node
    {
        public:
        Mapping();
        std::string type(){return "Mapping";}
        std::string dump();

        private:
    };

}

#endif /* YAML_NODE_HH_ */

