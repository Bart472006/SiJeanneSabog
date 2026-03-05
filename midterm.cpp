#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Initialize stack1 and stack2
    stack<int> stack1, stack2;
    stack<int> reversedStack1, reversedStack2, stack3;

    // Fill stack1 and stack2
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);

    stack2.push(6);
    stack2.push(7);
    stack2.push(8);
    stack2.push(9);
    stack2.push(10);

    // Reverse stack1 into reversedStack1
    while (!stack1.empty()) {
        reversedStack1.push(stack1.top());
        stack1.pop();
    }

    // Reverse stack2 into reversedStack2
    while (!stack2.empty()) {
        reversedStack2.push(stack2.top());
        stack2.pop();
    }

    // Add elements from reversedStack1 and reversedStack2 into stack3
    while (!reversedStack1.empty() && !reversedStack2.empty()) {
        int sum = reversedStack1.top() + reversedStack2.top();
        stack3.push(sum);
        reversedStack1.pop();
        reversedStack2.pop();
    }

    // Display the result in stack3
    cout << "stack3: ";
    while (!stack3.empty()) {
        cout << stack3.top() << " ";
        stack3.pop();
    }
    cout << endl;

    return 0;
}