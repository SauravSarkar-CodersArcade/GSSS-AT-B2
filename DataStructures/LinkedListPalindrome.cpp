#include <iostream>
#include <stack>
using namespace std;
struct Node {
    int data;
    struct Node *next;
    explicit Node(int x){
        data = x;
        next = nullptr;
    }
};
class Solution {
public:
    static bool isPalindrome(Node* head){
        stack<int> s;
        Node* current = head;
        // Traversal 1: Push all the elements of the linked list into the
        // stack
        while(current != nullptr){
            s.push(current->data);
            current = current->next;
        }
        // Traversal 2: Traverse the linked list again and compare
        // the elements with the popped elements of the stack.
        current = head;
        while (current != nullptr){
            int top = s.top();
            s.pop();
            // If the elements do not match, not Palindrome (false)
            if (current->data != top){
                return false;
            }
            current = current->next;
        }
        // All elements equal :
        return true;
    }
};
int main() {
    int T, i, n, l, firstData;
    cin >> T;
    while(T--){
        struct Node *head = nullptr, *tail = nullptr;
        cin >> n;
        cin >> firstData;
        head = new Node(firstData);
        tail = head;
        for (i=1; i<n; i++){
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        if (Solution::isPalindrome(head)){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }
    return 0;
}
