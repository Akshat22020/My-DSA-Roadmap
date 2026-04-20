#include<iostream>
using namespace std;

class Queue {
public:
    int b;
    int f;
    int arr[5];

    Queue() {
        f = 0;
        b = 0;
    }

    void push(int val) {
        if (b == 5) {
            cout << "Queue is full\n";
            return;
        }
        arr[b] = val;
        b++;  // ✅ IMPORTANT FIX
    }

    void pop() {
        if (f == b) {  // ✅ FIX
            cout << "Queue is empty\n";
            return;
        }
        f++;
    }

    int top() {
        if (f == b) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[f];
    }

    int back() {
        if (f == b) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[b - 1];
    }

    int size() {
        return b - f;
    }

    bool empty() {
        return (f == b);  // ✅ FIX
    }

    void display() {
        for (int i = f; i < b; i++) {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();

    q.push(50);
    q.push(60); // should show "Queue is full"
    q.display();

    q.pop();
    q.display();
}