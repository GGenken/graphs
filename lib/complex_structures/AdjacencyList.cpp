#pragma once


#include "AdjacencyList.h"
#include <string>

//std::unordered_set<Node>* AdjacencyList::getChildrenLinks(Node node) {
//    return &this->container[node];
//}

std::unordered_set<Node> AdjacencyList::getChildren(Node node) {
    return this->container[node];
}

void AdjacencyList::addNode(Node node) {
    this->container[node];
}

void AdjacencyList::addEdge(Edge edge) {
    this->container[edge.parent].insert(edge.child);
}

AdjacencyList::operator std::string() {
    std::string result;
    result.append("Adjacency List; parental list size: ");
    result.append(std::to_string(this->container.size()));
    result.append("\n");
    for (const auto& node : this->container) {
        result.append(std::to_string(node.first));
        result.append(" : ");
        for (auto child : node.second) {
            result.append(std::to_string(child));
            result.append(" ");
        }
        result.append("\n");
    }
    return result;
}
