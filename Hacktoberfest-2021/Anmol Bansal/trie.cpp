/*
Trie Implementation in C++
1. Add string in Trie
2. Search String in Trie
*/


#include<bits/stdc++.h>

using namespace std;

// Trie Node
struct node {
	bool isPresent; // Stores if a string ends at this node
	map<char,node*> mp; // Stores the pointers to next character in string
	
	// Initiate node
	node() {
		isPresent = false;
		mp.clear();
	}
};

// Trie Class
class trie {
	node *root;
public:
	// Initiate trie with new node
	trie() {
		root = new node();
	}

	// Insert String in trie
	void insert(string s) {
		node *it = root;	// Iterator for trie
		int idx = 0;		// Iterator for string

		while(idx < s.size()) {
			// Create new node if character not present
			if(it->mp.find(s[idx]) == it->mp.end()) {
				it->mp[s[idx]] = new node();
			}

			it = it->mp[s[idx]];
			idx++;
		}
		it->isPresent = true; // Marking isPresent to true to indicate that string ends here
		return;
	}

	// Search if string is present
	bool search(string s) {
		node *it = root;	// Iterator for trie
		int idx = 0;		// Iterator for string

		while(idx<s.size()) {
			// If character not found
			if(it->mp.find(s[idx]) == it->mp.end()) {
				break;
			}

			// else go to next character
			it = it->mp[s[idx]];
			idx++;
		}

		// return false if idx < s.size() or isPresent = false
		if(idx < s.size() || it->isPresent==false) return false;
		// Otherwise return true
		return true;
	}
};

// Driver Function
int main() {
	trie T;
	// Sample Insertions
	cout<<"Enter number of strings to insert: ";
	int n;
	cin>>n;
	cout<<"Enter Strings: \n";
	while(n--) {
		string s;
		cin>>s;
		T.insert(s);
	}

	// Sample Search
	cout<<"Enter number of strings to search: ";
	cin>>n;
	while(n--) {
		string s;
		cin>>s;
		if(T.search(s)) cout<<"Found\n";
		else cout<<"Not Found\n";
	}
	return 0;
}

// This program is contributed by Anmol Bansal
