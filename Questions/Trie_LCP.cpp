#include <iostream>
#include <vector>
#include <string>
using namespace std;
class TrieNode {
public:
    TrieNode* childNode[26];
    bool isEndOfWord;
    int childrenCount;
    explicit TrieNode(){
        isEndOfWord = false;
        childrenCount = 0;
        for (int i=0; i<26; i++){
            childNode[i] = nullptr;
        }
    }
};
void insert(TrieNode* root, const string& key){
    TrieNode* current = root;
    for (char c : key){
        int index = c - 'a';
        if (current->childNode[index] == nullptr){
            current->childNode[index] = new TrieNode();
            current->childrenCount++;
        }
        current = current->childNode[index];
    }
    current->isEndOfWord = true;
}
string longestCommonPrefix(TrieNode* root){
    string prefix = "";
    TrieNode* current = root;
    while
    (current && current->childrenCount == 1 && !current->isEndOfWord){
        for (int i=0; i<26; i++){
            if (current->childNode[i] != nullptr){
                prefix += (i + 'a');
                current = current->childNode[i];
                break;
            }
        }
    }
    return prefix;
}
int main() {
    TrieNode* root = new TrieNode();
    vector<string> words = {"flower", "flow", "flight", "fleet"};
    for (const string& word : words){
        insert(root, word);
    }
    string lcp = longestCommonPrefix(root);
    if (lcp.empty()){
        cout << "There's no common prefix among the input words." <<
        endl;
    }else{
        cout << "The longest common prefix is: " << lcp << endl;
    }
    delete root;
    return 0;
}
