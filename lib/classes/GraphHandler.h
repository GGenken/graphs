#pragma once
#ifndef GRAPHS_GRAPHHANDLER_H
#define GRAPHS_GRAPHHANDLER_H


#include <vector>
#include <unordered_set>
#include <string>
#include "../basic_structures/Node.h"
#include "../basic_structures/Edge.h"

template<class GraphContainer>
class GraphHandler {
protected:
    GraphContainer container;

    ~GraphHandler() = default;

    // virtual std::unordered_set<Node>* getChildrenLinks(Node) = 0;
    virtual std::unordered_set<Node> getChildren(Node) = 0;

    virtual void addNode(Node) = 0;
    virtual void addEdge(Edge) = 0;


    explicit virtual operator std::string() = 0;
};


#endif //GRAPHS_GRAPHHANDLER_H
