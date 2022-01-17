#ifndef GRAPHS_EDGE_H
#define GRAPHS_EDGE_H


#include "./ComplexNode.h"
#include "../types.h"

template <typename NodeType>
struct Edge {
    NodeType *parent;
    NodeType *child;
    EDGE_WEIGHT weight;
};


#endif //GRAPHS_EDGE_H
