#ifndef GRAPHS_LIBRARY_H
#define GRAPHS_LIBRARY_H

// -----------------------------------------

/* Includes */

#include <algorithm>
#include <vector>
#include <map>

/* Types */

typedef unsigned long long NODE_ID;
typedef long long          EDGE_WEIGHT;

/* Code */

struct Node {
    NODE_ID id;
};

struct Edge {
    Node *parent;
    Node *child;
};

typedef std::vector<Node>                           NodeList;
typedef std::vector<std::pair<Node, EDGE_WEIGHT>>*  NodeListWithWeights;
typedef std::vector<Edge>                           EdgeList;
typedef std::vector<std::pair<Node, EDGE_WEIGHT>>*  EdgeListWithWeights;

template<class GraphContainer>
class GraphHandler {
protected:
    GraphContainer container;
    virtual NodeList* getChildren(Node);
    virtual void addNode(Node);
};

class AdjacencyList : public GraphHandler<std::map<Node, NodeList>> {
public:
    NodeList* getChildren(Node node) {
        return &this->container[node];
    };

    void addNode(Node node) {
        this->container[node];
    }

    void addEdge(Node parent, Node child) {
        this->container[parent].push_back(child);
    }
};

//    class WeightedAdjacencyList : public GraphHandler<std::map<Node, std::vector<std::pair<Node, EDGE_WEIGHT>>>> {
//    public:
//        WeightedAdjacencyList();
//
//        NodeList* getChildren(Node node) {
//            return &this->container[node];
//        };
//
//        void addNode(Node node) {
//            this->container[node];
//        }
//        void addEdge(Node parent, Node child, EDGE_WEIGHT weight = 1) {
//            this->container[parent].push_back(std::make_pair(child, weight));
//        }
//    };

class DFS {
public:

};


// -----------------------------------------

#endif //GRAPHS_LIBRARY_H
