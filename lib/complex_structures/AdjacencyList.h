//
// Created by genken on 1/15/22.
//

#ifndef GRAPHS_ADJACENCYLIST_H
#define GRAPHS_ADJACENCYLIST_H


#include <map>
#include "../basic_structures/NodeList.h"
#include "../classes/GraphHandler.h"

class AdjacencyList : public GraphHandler<std::map<Node, NodeList>> {
public:
    NodeList* getChildren(Node node);

    void addNode(Node node);
    void addEdge(Node parent, Node child);
};


#endif //GRAPHS_ADJACENCYLIST_H
