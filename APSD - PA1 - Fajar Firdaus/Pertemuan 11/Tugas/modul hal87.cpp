#include <iostream>
#include <limits.h>
using namespace std;

#define V 7  // Jumlah vertex

int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (!sptSet[v] && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V]; 
    bool sptSet[V]; 

    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; i++)
        cout << i << "\t" << dist[i] << endl;
}

int main() {
    int graph[V][V] = {
        // 0  1  2  3  4  5  6
        { 0, 7, 0, 0, 0, 0, 9 },   // 0
        { 7, 0,11, 8, 0, 0,14 },   // 1
        { 0,11, 0,10,15, 0, 0 },   // 2
        { 0, 8,10, 0,11, 0, 2 },   // 3
        { 0, 0,15,11, 0, 6, 0 },   // 4
        { 0, 0, 0, 0, 6, 0, 9 },   // 5
        { 9,14, 0, 2, 0, 9, 0 }    // 6
    };

    dijkstra(graph, 0);

    return 0;
}

