#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Initialize queue1 and queue2
    queue<int> queue1, queue2;
    queue<int> queue3;

    // Fill queue1 and queue2
    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    queue1.push(4);
    queue1.push(5);

    queue2.push(6);
    queue2.push(7);
    queue2.push(8);
    queue2.push(9);
    queue2.push(10);

    // Add elements from queue1 and queue2 into queue3
    while (!queue1.empty() && !queue2.empty()) {
        int sum = queue1.front() + queue2.front();
        queue3.push(sum);
        queue1.pop();
        queue2.pop();
    }

    // Display the result in queue3
    cout << "queue3: ";
    while (!queue3.empty()) {
        cout << queue3.front() << " ";
        queue3.pop();
    }
    cout << endl;

    return 0;
}