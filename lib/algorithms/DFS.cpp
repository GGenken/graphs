#pragma once
#include "DFS.h"

template <class AnyGraphHandler>
void DFS<AnyGraphHandler>::start(Node start_node, void (*functor)(Node, std::unordered_set<Node>, std::stack<Node>)) {
    this->traverse_stack.push(start_node);
    while (this->traverse_stack.size() != 0) {
        Node current_node = this->traverse_stack.top();
        this->traverse_stack.pop();

        std::unordered_set<Node> children = this->graph->getChildren(current_node);

        functor(current_node, children, this->traverse_stack);

        for (auto child : children) { this->traverse_stack.push(child); }
    }
}

