#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *cur = head;
        int x,y,m;
        while(cur->next!=nullptr){
            x = cur->val;
            y = cur->next->val;
            m = __gcd(x,y);
            ListNode *temp = cur->next;
            cur->next = new ListNode(m,cur->next);
            cur = temp;
        }
        return head;
    }
};

int main() {
    int arr[] = {18,6,10,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createLinkedList(arr, n);

    printLinkedList(head);

    Solution s;
    head = s.insertGreatestCommonDivisors(head);
    printLinkedList(head);

    return 0;
}