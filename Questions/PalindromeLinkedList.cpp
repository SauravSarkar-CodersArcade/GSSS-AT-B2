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
class Approach {
public:
    static bool isPalindrome(Node* head){
        stack<int> s;
        Node* current = head;
        // 1st traversal to store the data into the stack
        while (current != nullptr){
            s.push(current->data);
            current = current->next;
        }
        // 2nd traversal to compare Linked List with Stack elements
        current = head;
        while (current != nullptr){
            int top = s.top();
            s.pop();
            if (current->data != top){
                return false;
            }
            current = current->next;
        }
        return true;
    }
};
int main() {
    int T, i, n, l, firstData;
    cin >> T;
    while (T--){
        struct Node *head = nullptr, *tail = nullptr;
        cin >> n;
        cin >> firstData;
        head = new Node(firstData);
        tail = head;
        // remaining values
        for (i = 1; i<n; i++){
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        if (Approach::isPalindrome(head)){
            cout << "true" << endl;
        }else{
            cout << "false" << endl;
        }
    }
    return 0;
}
