#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Push element
    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;

        arr[top] = x;
    }

    // Pop element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        top--;
        for(int i=0;i<n;i++){
            
        }
    }

    // See top element
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }

        return arr[top];
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }

    // Display stack
    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top: " << s.peek() << endl;

    s.pop();

    s.display();

    return 0;
}