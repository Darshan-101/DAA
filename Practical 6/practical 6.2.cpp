#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Depth First Search Algorithm
void DFS(int graph[][7], int start, int n) {
    static int visited[7] = {0};
    if (visited[start] == 0) {
        cout << start << " ";
        visited[start] = 1;

        for (int i = 1; i < n; i++) {
            if (graph[start][i] == 1 && visited[i] == 0) {
                DFS(graph, i, n);
            }
        }
    }
}

int main(){

 // Depth First Search
    int graph[7][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}
    };

    cout << "Depth First Search: ";
    DFS(graph, 1, 7);
    cout << endl;

}