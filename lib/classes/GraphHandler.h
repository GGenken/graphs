#ifndef GRAPHS_GRAPHHANDLER_H
#define GRAPHS_GRAPHHANDLER_H


#include <vector>
#include "../basic_structures/Node.h"
#include "../basic_structures/Edge.h"

template<class GraphContainer, class NodeType>
class GraphHandler {
protected:
    GraphContainer container;
    virtual std::vector<NodeType*> getChildren(NodeType);
    virtual void addNode(NodeType);
    virtual void addEdge(Edge<NodeType>);
};


#endif //GRAPHS_GRAPHHANDLER_H
