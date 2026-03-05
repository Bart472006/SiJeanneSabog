#include <iostream>
#include <vector>

using namespace std;

class SegmentTree {
    vector<int> tree;
    int n;

    void build(vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            build(arr, 2 * node, start, mid);
            build(arr, 2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return 0;
        if (l <= start && end <= r) return tree[node];
        int mid = (start + end) / 2;
        return query(2 * node, start, mid, l, r) +
               query(2 * node + 1, mid + 1, end, l, r);
    }

    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (idx <= mid)
                update(2 * node, start, mid, idx, val);
            else
                update(2 * node + 1, mid + 1, end, idx, val);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    void displayConnections(int node, int start, int end) {
        int mid = (start + end) / 2;
        if (start == end) {
            cout << "Node " << node << " [" << start << "," << end << "] (Value: " << tree[node] << ") -> Leaf" << endl;
            return;
        }
        
        cout << "Node " << node << " [" << start << "," << end << "] (Value: " << tree[node] << ") -> "
             << "Left Child " << 2 * node << " [" << start << "," << mid << "]" << endl;
        cout << "Node " << node << " [" << start << "," << end << "] (Value: " << tree[node] << ") -> "
             << "Right Child " << 2 * node + 1 << " [" << mid + 1 << "," << end << "]" << endl;
        
        displayConnections(2 * node, start, mid);
        displayConnections(2 * node + 1, mid + 1, end);
    }

public:
    SegmentTree(vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        build(arr, 1, 0, n - 1);
    }

    int rangeQuery(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }

    void pointUpdate(int idx, int val) {
        update(1, 0, n - 1, idx, val);
    }

    void displayTreeConnections() {
        cout << "\nSegment Tree Node Connections and Values:" << endl;
        displayConnections(1, 0, n - 1);
    }
};

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    SegmentTree st(arr);

    st.displayTreeConnections();
    cout << "Sum of range [3, 5]: " << st.rangeQuery(3, 5) << endl;

    st.pointUpdate(3, 10);
    cout << "After update, sum of range [3, 5]: " << st.rangeQuery(3, 5) << endl;

    st.displayTreeConnections();

    return 0;
}