#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to reverse a queue
queue<int> reverseQueue(queue<int> q) {
    stack<int> s;
    // Push all elements of the queue into the stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    // Push all elements back into the queue from the stack
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    return q;
}

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

    // Reverse queue1 and queue2
    queue1 = reverseQueue(queue1);
    queue2 = reverseQueue(queue2);

    // Add elements from reversed queue1 and queue2 into queue3
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