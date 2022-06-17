#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:

    Node * insert(Node * root, int data) {
		Node *temp = new Node(data);
        if (root == NULL){
            return temp;
        }
        else if (root->data  <  data){
            root->right = insert(root->right , data);
        }
        else if (root->data > data) {
            root->left = insert(root->left , data);
        }
        return root;
	}
	
	void inOrder(Node *root){
		if(root == NULL) return;
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);
	}
};

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    cin >> t;

    while(t-->0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    
    myTree.inOrder(root);
  
    return 0;
}
