#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* createLinkList(vector<int> input) {
    // Here we have to use new keyword to create ListNode on the heap memory
    // Notice there is no need of using & operator
    ListNode* head = new ListNode(input[0]);
    ListNode* curr = head;

    for (int i = 1; i < input.size(); i++) {
        // Here we have to use new keyword to create ListNode on the heap memory
        // Notice there is no need of using & operator
        curr->next = new ListNode(input[i]);
        curr = curr->next;
    }

    return head;
}

void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

struct CustomComparator {
    // With priority_queue, greater means min heap
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<ListNode*, vector<ListNode*>, CustomComparator> minQueue;
    ListNode* head = new ListNode();
    ListNode* curr = head;
    // Add all the heads of the link lists into queue;
    for (int i = 0; i < lists.size(); i++) {
        minQueue.push(lists[i]);
    }

    while (!minQueue.empty()) {
        // Assign the minimum node to the result linked list
        ListNode* top = minQueue.top();
        curr->next = new ListNode(top->val);
        // Move the pointer
        curr = curr->next;

        // Remove the minumum node from the heap
        minQueue.pop();
        // Added the next node to heap
        if (top->next != nullptr) {
            minQueue.push(top->next);
        }
    }

    return head->next;
}

int main() {
    // Initialize the list of linked list
    vector<ListNode*> lists;

    // Create value vector for likend list item
    vector<int> a{0, 2, 4};
    vector<int> b{1, 3, 6};
    vector<int> c{5, 7, 8};

    lists.push_back(createLinkList(a));
    lists.push_back(createLinkList(b));
    lists.push_back(createLinkList(c));

    cout << "The original linked lists: " << endl;
    for (int i = 0; i < lists.size(); i++) {
        printLinkedList(lists[i]);
    }

    cout << "The merged linked list" << endl;
    ListNode* mergeHead = mergeKLists(lists);
    printLinkedList(mergeHead);
}