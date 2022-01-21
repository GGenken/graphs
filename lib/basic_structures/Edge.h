#pragma once
#ifndef GRAPHS_EDGE_H
#define GRAPHS_EDGE_H


#include "./Node.h"
#include "../types.h"

struct Edge {
    Node parent;
    Node child;
    // EDGE_WEIGHT weight;

    Edge(Node parent, Node child) : parent(parent), child(child) {}
};


#endif //GRAPHS_EDGE_H
