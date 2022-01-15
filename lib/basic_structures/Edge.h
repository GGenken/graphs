//
// Created by genken on 1/15/22.
//

#ifndef GRAPHS_EDGE_H
#define GRAPHS_EDGE_H


#include "./Node.h"
#include "../types.h"
struct Edge {
    Node *parent;
    Node *child;
    EDGE_WEIGHT weight;
};


#endif //GRAPHS_EDGE_H
