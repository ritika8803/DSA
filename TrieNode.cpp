#include <iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d){
        this -> data = d;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        this -> isTerminal = false;
    }
};

void insertWord(TrieNode* root, string word){
    //base case
    if(word.length() == 0){
        root -> isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root -> children[index] != NULL){
        //present
        child = root -> children[index];
    }
    else{
        //not present
        child = new TrieNode(ch);
        root -> children[index] = child;
    }

    //recursive 
    insertWord(child, word.substr(1));
    
}

bool searchWord(TrieNode* root, string word){
    //base case
    if(word.length() == 0){
        return root -> isTerminal;  
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root -> children[index] != NULL){
        //present
        child = root -> children[index];
    }
    else{
        //not present
        return false;
    }

    //recursive 
    return searchWord(child, word.substr(1));
    
}

void deleteWord(TrieNode* root, string word){
    cout << "deleting" << word << endl;
    //base case
    if(word.length() == 0){
        root -> isTerminal = false;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root -> children[index] != NULL){
        //present
        child = root -> children[index];
    }

    //recursive 
    deleteWord(child, word.substr(1));
    
}

int main(){

    TrieNode* root = new TrieNode('-');
    //insert
    insertWord(root, "coding");
    insertWord(root, "coder");
    insertWord(root, "codehelp");
    insertWord(root, "ritika");
    insertWord(root, "ritu");
    insertWord(root, "riti");

    //search
    if(searchWord(root, "ritu")){
        cout << "present" << endl;
    }
    else{
        cout << "not present" << endl;
    }

    //deletion
    deleteWord(root, "ritu");

    //searching after deleting
    if(searchWord(root, "ritu")){
        cout << "present" << endl;
    }
    else{
        cout << "not present" << endl;
    }

  return 0;
}