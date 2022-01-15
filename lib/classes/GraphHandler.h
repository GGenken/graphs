//
// Created by genken on 1/15/22.
//

#ifndef GRAPHS_GRAPHHANDLER_H
#define GRAPHS_GRAPHHANDLER_H


#include "../basic_structures/NodeList.h"

template<class GraphContainer>
class GraphHandler {
protected:
    GraphContainer container;
    virtual NodeList* getChildren(Node);
    virtual void addNode(Node);
};


#endif //GRAPHS_GRAPHHANDLER_H
