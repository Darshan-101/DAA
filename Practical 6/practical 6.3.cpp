#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Breadth First Search Algorithm
void BFS(int graph[][7], int start, int n) {
    queue<int> q;
    int visited[7] = {0};

    cout << start << " ";
    visited[start] = 1;
    q.emplace(start);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 1; i < n; i++) {
            if (graph[u][i] == 1 && visited[i] == 0) {
                cout << i << " ";
                visited[i] = 1;
                q.emplace(i);
            }
        }
    }
}

int main(){

// Breadth First Search
    cout << "Breadth First Search: ";
    BFS(graph, 1, 7);
    cout << endl;

    return 0;

}