#include <iostream>
#include <queue>
using namespace std;

template<typename T>
void print_queue(T &q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout<<endl;
}

struct CustomComparator{
    bool operator()(int a, int b) {
        return a>b;
    }
};

int main() {
    vector<int> input{1, 8, 5, 4, 6, 7};

    // Create a max heap
    priority_queue<int> maxQueue(input.begin(), input.end());
    print_queue(maxQueue);

    // Create a min heap
    priority_queue<int, vector<int>, greater<int>> minQueue(input.begin(), input.end());
    print_queue(minQueue);

    // Create a custom sort heap
    priority_queue<int, vector<int>, CustomComparator> customQueue(input.begin(), input.end());
    print_queue(customQueue);
}