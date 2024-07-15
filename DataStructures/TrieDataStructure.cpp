#include <iostream>
#include <vector>
using namespace std;
class TrieNode {
public:
    TrieNode* children[26];
    bool wordEnd;
    explicit TrieNode(){
        wordEnd = false;
        for (int i=0; i<26; i++){
            children[i] = nullptr;
        }
    }
};
void insert_key(TrieNode* root, string& key){
    TrieNode* current = root;
    for (auto c : key) { // ARYAN : A,R,Y,A,N
        if (current->children[c-'a'] == nullptr){
            TrieNode *newNode = new TrieNode();
            current->children[c - 'a'] = newNode;
        }
        current = current->children[c-'a'];
        current->wordEnd = true;
    }
}

bool search_key(TrieNode* root, string& key){
    TrieNode* current = root;
    for (auto c : key){
        if (current->children[c-'a'] == nullptr){
            return false;
        }
        current = current->children[c-'a'];
    }
    return current->wordEnd;
}
int main() {
    TrieNode* root = new TrieNode();
    vector<string> input =
            {"rishitha","amrutha","bhoomika","chandana"};
    int n = input.size();
    for (int i=0; i<n; i++){
        insert_key(root, input[i]);
    }
    vector<string> search_data =
            {"rishitha","sahana","amrutha","bhoomika","ramya","chandana"};
    for (int i=0; i<search_data.size(); i++){
        if (search_key(root, search_data[i])){
            cout << search_data[i] << " :is available." << endl;
        }else{
            cout << search_data[i] << " :is not available." << endl;
        }
    }
    return 0;
}
