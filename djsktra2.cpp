#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <queue>

using namespace std;

const int INF = 9999;
const int N = 15;

string places[N] = {
    "canteen", "gym", "hallway", "stairs_g", "elevator_g",
    "hm_building", "en_building", "tyk_building", "sao", "lct_building",
    "elevator_2f", "stairs_2f", "room5", "room6", "room7"
};

int getIndex(string name) {
    for (int i = 0; i < N; i++)
        if (places[i] == name)
            return i;
    return -1;
}

void dijkstra(vector<vector<int>> &graph, int start, int end) {
    vector<int> dist(N, INF), prev(N, -1);
    vector<bool> visited(N, false);
    dist[start] = 0;

    for (int i = 0; i < N - 1; i++) {
        int u = -1;
        for (int j = 0; j < N; j++)
            if (!visited[j] && (u == -1 || dist[j] < dist[u]))
                u = j;

        visited[u] = true;

        for (int v = 0; v < N; v++) {
            if (graph[u][v] && !visited[v]) {
                int alt = dist[u] + graph[u][v];
                if (alt < dist[v]) {
                    dist[v] = alt;
                    prev[v] = u;
                }
            }
        }
    }

    if (dist[end] == INF) {
        cout << "No path found.\n";
        return;
    }

    cout << "\nEasiest route distance: " << dist[end] << " meters\n";
    cout << "Path: ";
    vector<int> path;
    for (int at = end; at != -1; at = prev[at])
        path.push_back(at);

    for (int i = path.size() - 1; i >= 0; i--) {
        cout << places[path[i]];
        if (i != 0) cout << " -> ";
    }
    cout << "\n";
}

int main() {
    // Build base graph (all on ground floor)
    vector<vector<int>> graph(N, vector<int>(N, 0));

    // Sample connections (ground floor)
    graph[0][2] = graph[2][0] = 10; // canteen <-> hallway
    graph[1][2] = graph[2][1] = 8;  // gym <-> hallway
    graph[2][3] = graph[3][2] = 5;  // hallway <-> stairs
    graph[2][4] = graph[4][2] = 5;  // hallway <-> elevator
    graph[2][5] = graph[5][2] = 12; // hallway <-> hm building
    graph[5][6] = graph[6][5] = 10; // hm <-> en
    graph[6][7] = graph[7][6] = 10; // en <-> tyk
    graph[7][8] = graph[8][7] = 7;  // tyk <-> sao
    graph[8][9] = graph[9][8] = 6;  // sao <-> lct

    // Upstairs (elevator or stairs access)
    char access;
    cout << "Where do you want to go? ";
    string destination;
    cin >> destination;

    cout << "Where do you want to start? ";
    string start;
    cin >> start;

    cout << "Do you need elevators or stairs? (e/s/n): ";
    cin >> access;

    if (access == 'e') {
        graph[4][10] = graph[10][4] = 1; // elevator_g <-> elevator_2f
        graph[10][12] = graph[12][10] = 5; // elevator_2f <-> room5
        graph[12][13] = graph[13][12] = 5; // room5 <-> room6
        graph[13][14] = graph[14][13] = 5; // room6 <-> room7
    }

    if (access == 's') {
        graph[3][11] = graph[11][3] = 1; // stairs_g <-> stairs_2f
        graph[11][12] = graph[12][11] = 5;
        graph[12][13] = graph[13][12] = 5;
        graph[13][14] = graph[14][13] = 5;
    }

    int startIndex = getIndex(start);
    int destIndex = getIndex(destination);

    if (startIndex == -1 || destIndex == -1) {
        cout << "Invalid input.\n";
        return 0;
    }

    dijkstra(graph, startIndex, destIndex);
    return 0;
}
