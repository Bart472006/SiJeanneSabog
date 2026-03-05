#include <iostream>
#include <vector>
using namespace std;

class Heap {
private:
    vector<int> data;
    bool isMinHeap;

    int parent(int i) { return (i - 1) / 2; }
    int left(int i)   { return 2 * i + 1; }
    int right(int i)  { return 2 * i + 2; }

    bool compare(int a, int b) {
        return isMinHeap ? a < b : a > b;
    }

    void heapifyUp(int i) {
        while (i > 0 && compare(data[i], data[parent(i)])) {
            swap(data[i], data[parent(i)]);
            i = parent(i);
        }
    }

    void heapifyDown(int i) {
        int best = i;
        int l = left(i);
        int r = right(i);

        if (l < data.size() && compare(data[l], data[best]))
            best = l;
        if (r < data.size() && compare(data[r], data[best]))
            best = r;

        if (best != i) {
            swap(data[i], data[best]);
            heapifyDown(best);
        }
    }

public:
    Heap(bool isMin = true) {
        isMinHeap = isMin;
    }

    void insert(int val) {
        data.push_back(val);
        heapifyUp(data.size() - 1);
    }

    void displayArray() {
        cout << (isMinHeap ? "Min Heap" : "Max Heap") << " (Array): ";
        for (int val : data)
            cout << val << " ";
        cout << endl;
    }

    void displayConnections() {
        cout << (isMinHeap ? "Min Heap" : "Max Heap") << " (Node Connections):" << endl;
        for (int i = 0; i < data.size(); ++i) {
            int l = left(i);
            int r = right(i);
            if (l < data.size())
                cout << data[i] << " -> " << data[l] << " (left)" << endl;
            if (r < data.size())
                cout << data[i] << " -> " << data[r] << " (right)" << endl;
        }
        cout << endl;
    }
};

int main() {
    Heap minHeap(true);
    Heap maxHeap(false);

    vector<int> values = {10, 40, 15, 30, 50, 20};

    for (int val : values) {
        minHeap.insert(val);
        maxHeap.insert(val);
    }

    minHeap.displayArray();
    minHeap.displayConnections();

    maxHeap.displayArray();
    maxHeap.displayConnections();

    return 0;
}