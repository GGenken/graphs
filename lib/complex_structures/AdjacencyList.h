#ifndef GRAPHS_ADJACENCYLIST_H
#define GRAPHS_ADJACENCYLIST_H


#include <map>
#include "../classes/GraphHandler.h"

class AdjacencyList : public GraphHandler<std::map<ComplexNode, NodeList>> {
public:
    NodeList* getChildren(ComplexNode node) final;

    void addNode(ComplexNode node) final;
    void addEdge(ComplexNode parent, ComplexNode child) final;
};


#endif //GRAPHS_ADJACENCYLIST_H
