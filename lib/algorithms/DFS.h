#pragma once
#ifndef GRAPHS_DFS_H
#define GRAPHS_DFS_H


#include <stack>
#include "./../classes/GraphAlgorithm.h"
#include "./../basic_structures/Node.h"

template <class AnyGraphContainer>
class DFS : GraphAlgorithm<AnyGraphContainer> {
private:
    std::stack<Node> traverse_stack;

public:
    void start(Node start_node = 0, void (*functor)(Node, std::unordered_set<Node>, std::stack<Node>) = nullptr);
    explicit DFS(AnyGraphContainer* graph) : GraphAlgorithm<AnyGraphContainer>(graph) {}
};


#endif //GRAPHS_DFS_H
