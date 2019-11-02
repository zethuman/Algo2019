#include <iostream>

using namespace std;

class Node {
    public:
    int key;
    Node *left;
    Node *right;

    Node(int key) {
        this->key = key;
        left = NULL;
        right = NULL;
    }
};

class Tree {
    public:
    Node *root;
    Tree() {
        root = NULL;
    }

    void insert(Node *node, int key) {

    }
};

int main() {
    return 0;
}

dfs(int v, int p = -1) {
    used[v] = true;
    tin[v] = fup[v] = timer++;
    for (int i = 0; i < g[v].size(); i++) {
        to = g[v][i];
        if (p == to) continue;
        if (used[to]) fup[v] = min(fup[v], tin[to]);
        else {
            dfs(to, v);
            fup[v] = min(fup[v], fup[to]);
            if (fup[to] <= )
        }
    }
}