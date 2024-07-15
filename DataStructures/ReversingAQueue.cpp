#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void printQueueElements(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
queue<int> reverseQueue(queue<int>& q){
    stack<int> s;
    while (!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while (!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << "Printing the original queue elements: " << endl;
    printQueueElements(q);
    reverseQueue(q);
    cout << "Printing the reversed queue elements: " << endl;
    printQueueElements(q);
    return 0;
}

