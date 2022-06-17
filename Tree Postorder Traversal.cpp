#include<bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node *left;
		Node *right;
		Node(int d){
			data = d;
			left = NULL;
			right = NULL;
		}
};

class Solution {
	public:
		Node *insert(Node *root, int data){
			Node *temp = new Node(data);
			if(root == NULL) return temp;
			else if(root->data < data){
				root->right = insert(root->right, data);
			}
			else if(root->data > data){
				root->left = insert(root->left, data);
			}
			return root;
		}
		
		void preOrder(Node *root){
			if( root == NULL) return;
						
			preOrder(root->left);
			preOrder(root->right);
			
			cout << root->data << " ";
		}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	Solution myTree;
	Node* root = NULL;
	
	int t;
	int data;
	
	cin >> t;
	
	while(t--){
		cin >> data;
		root = myTree.insert(root , data);
	}
	
	myTree.preOrder(root);
	return 0;
}


