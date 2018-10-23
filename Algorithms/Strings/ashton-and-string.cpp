#include <bits/stdc++.h>
using namespace std;

struct Node {
  Node* children[26];
};

struct Trie {
  Node* root = new Node();

  void add(Node* curr, string key) {
    if (key == "") return;
    int index = key[0] - 'a';
    if (curr->children[index] == NULL) {
      curr->children[index] = new Node();
    }
    add(curr->children[index], key.substr(1));
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    int k;
    cin >> s >> k;
    Trie* trie = new Trie();
    for (int i = 0; i < s.size(); i++) {
      for (int len = 1; len <= s.size() - i; len++) {
        string sub = s.substr(i, len);
        trie->add(trie->root, sub);
      }
    }
    // TODO: check if the trie is correct.
    //string concat = trie->concat(trie->root, "");
    //cout << concat << "\n";
    //cout << concat[k - 1] << "\n";
  }
  return 0;
}
