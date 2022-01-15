//
// Created by genken on 1/15/22.
//

#include "AdjacencyList.h"

NodeList* AdjacencyList::getChildren(Node node) {
    return &this->container[node];
}

void AdjacencyList::addNode(Node node) {
    this->container[node];
}

void AdjacencyList::addEdge(Node parent, Node child) {
    this->container[parent].push_back(child);
}
