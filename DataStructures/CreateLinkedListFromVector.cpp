#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string ans = "";
    for (int i=0; i<arr[0].length(); i++){
        char ch = arr[0][i];
        bool match = true;
        // Compare with the other strings
        for (int j=1; j<n; j++){
            // No matching found
            if (arr[j].size() < i || ch != arr[j][i]){
                match = false;
                break;
            }
        }
        if (match == false)
            break;
        else
            ans.push_back(ch);
    }
    return ans;
}
vector<int> separateNegativeAndPositive
(vector<int> &nums){
    // Write your code here.
    int index = 0;
    for (int i=0; i<nums.size(); i++){
        if (nums[i] < 0){
            swap(nums[i], nums[index]);
            index++;
        }
    }
    return nums;
}
class Node {
public:
    int value;
    Node* next;
};
void printLinkedList(Node* head){
    Node* current = head;
    while (current != nullptr){
        cout << current->value << "->";
        current = current->next;
    }
    cout << "null" << endl;
}
Node* createLinkedList(const vector<int>& elements){
    Node* head = nullptr;
    Node* tail;
    for (int val : elements){
        Node* newNode = new Node();
        newNode->value = val;
        if (!head){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    tail->next = nullptr;
    return head;
}
int main() {
    vector<int> elements = {1,2,3,4,5};
    Node* head = createLinkedList(elements);
    cout << "Linked List from Vector: " << endl;
    printLinkedList(head);
    // Clean Up Memory
    Node* current = head;
    while (current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}
