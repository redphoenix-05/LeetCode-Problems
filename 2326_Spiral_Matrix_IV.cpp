#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v1(m, vector<int>(n, -1));
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        ListNode *cur = head;

        while (top <= bottom && left <= right && cur) {
            for (int i = left; i <= right && cur; i++) {
                v1[top][i] = cur->val;
                cur = cur->next;
            }
            top++;
            for (int i = top; i <= bottom && cur; i++) {
                v1[i][right] = cur->val;
                cur = cur->next;
            }
            right--;
            for (int i = right; i >= left && cur; i--) {
                v1[bottom][i] = cur->val;
                cur = cur->next;
            }
            bottom--;
            for (int i = bottom; i >= top && cur; i--) {
                v1[i][left] = cur->val;
                cur = cur->next;
            }
            left++;
        }
        return v1;
    }
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

int main() {
    int arr[] = {3, 0, 2, 6, 8, 1, 7, 9, 4, 2, 5, 5, 0}; // Array to convert to linked list
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createLinkedList(arr, n);

    printLinkedList(head);
    Solution s;
    vector<vector<int>> v1;
    v1 = s.spiralMatrix(3,5,head);
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}