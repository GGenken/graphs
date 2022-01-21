#pragma once
#ifndef GRAPHS_ADJACENCYLIST_H
#define GRAPHS_ADJACENCYLIST_H


#include <unordered_map>
#include <unordered_set>
#include "../classes/GraphHandler.h"

class AdjacencyList : public GraphHandler<std::unordered_map<Node, std::unordered_set<Node>>> {
public:
    std::unordered_set<Node> getChildren(Node node) final;
    // std::unordered_set<Node>* getChildrenLinks(Node node) final;


    void addNode(Node node) final;
    void addEdge(Edge edge) final;

    explicit operator std::string() final;
};


#endif //GRAPHS_ADJACENCYLIST_H
