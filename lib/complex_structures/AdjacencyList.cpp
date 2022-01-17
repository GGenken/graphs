//
// Created by genken on 1/15/22.
//

#include "AdjacencyList.h"

NodeList* AdjacencyList::getChildren(ComplexNode node) {
    return &this->container[node];
}

void AdjacencyList::addNode(ComplexNode node) {
    this->container[node];
}

void AdjacencyList::addEdge(ComplexNode parent, ComplexNode child) {
    this->container[parent].push_back(child);
}
