#include <bits/stdc++.h>
using namespace std;

struct TrieNode {

    // pointer array for child nodes of each node
    TrieNode* childNode[26];

    // Used for indicating ending of string
    bool wordEnd;

    TrieNode()
    {
        // constructor
        // initialize the wordEnd variable with false
        // initialize every index of childNode array with
        // NULL
        wordEnd = false;
        for (int i = 0; i < 26; i++) {
            childNode[i] = nullptr;
        }
    }
};

void insert_key(TrieNode* root, string& key)
{
    // Initialize the currentNode pointer
    // with the root node
    TrieNode* currentNode = root;

    // Iterate across the length of the string
    for (auto c : key) {

        // Check if the node exist for the current
        // character in the Trie.
        if (currentNode->childNode[c - 'a'] == nullptr) {

            // If node for current character does not exist
            // then make a new node
            TrieNode* newNode = new TrieNode();

            // Keep the reference for the newly created
            // node.
            currentNode->childNode[c - 'a'] = newNode;
        }

        // Now, move the current node pointer to the newly
        // created node.
        currentNode = currentNode->childNode[c - 'a'];
    }

    // Increment the wordEndCount for the last currentNode
    // pointer this implies that there is a string ending at
    // currentNode.
    currentNode->wordEnd = 1;
}

bool search_key(TrieNode* root, string& key)
{
    // Initialize the currentNode pointer
    // with the root node
    TrieNode* currentNode = root;

    // Iterate across the length of the string
    for (auto c : key) {

        // Check if the node exist for the current
        // character in the Trie.
        if (currentNode->childNode[c - 'a'] == nullptr) {

            // Given word does not exist in Trie
            return false;
        }

        // Move the currentNode pointer to the already
        // existing node for current character.
        currentNode = currentNode->childNode[c - 'a'];
    }

    return currentNode->wordEnd;
}

// Driver code
int main()
{
    // Make a root node for the Trie
    TrieNode* root = new TrieNode();

    // Stores the strings that we want to insert in the
    // Trie
    vector<string> inputStrings
            = { "and", "ant", "do", "geek", "dad", "ball" };

    // number of insert operations in the Trie
    int n = inputStrings.size();

    for (int i = 0; i < n; i++) {
        insert_key(root, inputStrings[i]);
    }

    // Stores the strings that we want to search in the Trie
    vector<string> searchQueryStrings
            = { "do", "geek", "bat" };

    // number of search operations in the Trie
    int searchQueries = searchQueryStrings.size();

    for (int i = 0; i < searchQueries; i++) {
        cout << "Query String: " << searchQueryStrings[i]
             << "\n";
        if (search_key(root, searchQueryStrings[i])) {
            // the queryString is present in the Trie
            cout << "The query string is present in the "
                    "Trie\n";
        }
        else {
            // the queryString is not present in the Trie
            cout << "The query string is not present in "
                    "the Trie\n";
        }
    }

    return 0;
}
