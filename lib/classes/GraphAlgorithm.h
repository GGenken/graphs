#pragma once
#ifndef GRAPHS_GRAPHALGORITHM_H
#define GRAPHS_GRAPHALGORITHM_H

#include "./GraphHandler.h"
#include <iostream>

template <class AnyGraphHandler>
class GraphAlgorithm {
public:
    AnyGraphHandler* graph;
    explicit GraphAlgorithm(AnyGraphHandler* graph) : graph(graph) {}
};

#endif //GRAPHS_GRAPHALGORITHM_H
