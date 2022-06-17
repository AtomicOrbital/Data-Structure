#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
 
    Node(int number)
    {
        data = number;
        left = NULL;
        right = NULL;
    }
};
 
void LRN(struct Node* node)
{
    if (node == NULL){
        return;
	}
    LRN(node->left);
    LRN(node->right);
    cout << node->data << " ";
}
 

void LNR(struct Node* node)
{
    if (node == NULL){
        return;
	}
    LNR(node->left);
    cout << node->data << " ";
    LNR(node->right);
}
 

void NLR(struct Node* node)
{
    if (node == NULL){
        return;
	}
    cout << node->data << " ";
    NLR(node->left);
    NLR(node->right);
}
 
int main()
{
 

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
 	root->left->right = new Node(5);
 	cout<<"NLR result: "<<endl;
 	NLR(root);
 	cout<<endl;
 	cout<<"LNR result: "<<endl;
 	LNR(root);
 	cout<<endl;
 	cout<<"LRN result: "<<endl;
 	LRN(root);
 	cout<<endl;
    return 0;
}
