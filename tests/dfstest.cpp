#include "./../lib/algorithms/DFS.cpp"
#include "./../lib/complex_structures/AdjacencyList.cpp"
#include <map>
#include <unordered_set>

void functor(Node parent, std::unordered_set<Node> children, std::stack<Node> traverse_stack) {
    std::cout << "BEBRA";
    int a = 5;
}

int main() {
    std::map<int, std::vector<int>> edges{ {0, {1}}, {1, {2}} };
    AdjacencyList gr;
    for (const auto& p : edges) {
        for (auto i : p.second) {
            gr.addEdge(Edge(p.first, i));
        }
    }

    DFS<AdjacencyList> dfs(&gr);
    dfs.start(0, &functor);

    std::cout << std::a;
}