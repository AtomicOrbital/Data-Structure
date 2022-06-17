#include <iostream>
#include <iomanip>
using namespace std;
struct node {//bi?u di?n node tr�n c�y
int data;//th�nh ph?n d? li?u c?a node
struct node *left;//th�nh ph?n li�n k?t v?i c�y con tr�i
struct node *right;// th�nh ph?n li�n k?t v?i c�y con ph?i
};
class BST {
public:
node *root; //��y l� c�y nh? ph�n g?c root
BST(void){ //constructor c?a l?p
root = NULL; //��?c thi?t l?p ban �?u l� NULL
}
node *newNode(int value); //t?o node r?i r?c c� gi� tr? value
node* search(node* root, int value); //t?m node c� gi� tr? value tr�n c�y
void preorder(node *root);//duy?t theo th? t? tr�?c
void inorder(node *root); //duy?t theo th? t? gi?a
void postorder(node *root); //duy?t theo th? t? sau
node* insert(node* T, int value); //th�m node c� gi� tr? value v�o c�y T
node * minValueNode(node* p); //t?m node c� gi� tr? nh? nh?t tr�n c�y g?c p
node* deleteNode(node* root, int data); //lo?i node c� gi� tr? vaule

void Function(void);//h�m th?c thi c�c thao t�c
};
node *BST::newNode(int value){ //t?o node c� gi� tr? value
node *temp = new node;//c?p ph�t mi?n nh? cho node
temp->data = value; //thi?t l?p th�nh ph?n d? li?u
temp->left = NULL; //thi?t l?p li�n k?t tr�i cho node
temp->right = NULL; //thi?t l?p li�n k?t ph?i cho node
return temp; // node r?i r?c ��?c t?o ra
}
node*BST:: search(node* root, int value){ //t?m node c� gi� tr? value tr�n c�y
if (root == NULL || root->data == value) //n?u g?c r?ng ho?c t?m th?y node
return root; //tr? l?i node
if (root->data < value)//n?u node c� gi� tr? b� h�n value
return search(root->right, value);//t?m ? c�y con ph?i
return search(root->left, value); //t?m ? c�y con tr�i
}
void BST::preorder(node *root){ //duy?t theo th? t? tr�?c
if (root != NULL){ //n?u c�y kh�ng r?ng
cout<<root->data<<setw(3);//th�m node
preorder(root->left);//duy?t NLR c�y con tr�i
preorder(root->right);//duyet NLR cay con ph?i
}
}
void BST::inorder(node *root){ //duy?t theo th? t? gi?a
if (root != NULL){ //n?u c�y kh�ng r?ng
inorder(root->left); //duy?t LNR c�y con tr�i
cout<< root->data<<setw(3);//th�m node
inorder(root->right); //duy?t LNR c�y con ph?i
}
}
void BST::postorder(node *root){ //duy?t theo th? t? sau
if (root != NULL){ //n?u c�y kh�ng r?ng
postorder(root->left); //duy?t LRN c�y con tr�i
postorder(root->right); //duy?t LRN c�y con ph?i
cout<< root->data<<setw(3);//th�m node
}
}


node* BST::insert(node* root, int value){//th�m node c� gi� tr? value
if (root == NULL) //n?u c�y r?ng
return newNode(value); //��y ch�nh l� node g?c
if (value < root ->data) //n?u �i?u n�y x?y ra
root ->left = insert(root ->left, value);//ta th�m v�o c�y con tr�i
else //tr�?ng h?p value>node->data
root ->right = insert(root ->right, value); //ta th�m v�o c�y con ph?i
return root;//tr? l?i node
}
node *BST:: minValueNode(node* p){//tr? l?i node c� gi� tr? nh? nh?t tr�n c�y g?c p
node *current = p;//current tr? �?n p
while (current->left != NULL)//quay tr�i li�n t?c
current = current->left;
return current; //��y ch�nh l� node tr�i nh?t c?a c�y g?c p
}
node*BST:: deleteNode(node* root, int value){//lo?i b? node c� gi� tr? value
if (root == NULL) //n?u c�y r?ng
return root;//kh�ng c� g? �? lo?i b?
if (value < root->data) //n?u node c?n lo?i c� gi� tr? nh? h�n node g?c
root->left = deleteNode(root->left, value); //sang c�y con tr�i ta lo?i
else if (value > root->data) //n?u node c?n lo?i c� gi� tr? l?n h�n node g?c
root->right = deleteNode(root->right, value); //sang c�y con ph?i ta lo?i
else { //n?u t?m th?y node c� gi� tr? value
if (root->left == NULL){ //n?u node c?n lo?i ch? c� c�y con ph?i
node *temp = root->right;
free(root);
return temp;
}
else if (root->right == NULL) {//n?u node c?n lo?i ch? c� c�y con tr�i
node *temp = root->left;
free(root);
return temp;
}
// tr�?ng h?p node c� c? hai c�y con
//ta l?y node tr�i nh?t c?a c�y con ph?i
node* temp = minValueNode(root->right);


root->data = temp->data; //thay th? n?i dung node c?n lo?i b?
root->right = deleteNode(root->right, temp->data);//lo?i b? node thay th?
}
return root;
}
void BST::Function(void) {
node *tmp; int value, choice;
do {
cout<<"\n CAY NHI PHAN TIM KIEM";
cout<<"\n 1. Them node vao cay BST";
cout<<"\n 2. Loai node tren cay BST ";
cout<<"\n 3. Tim node tren cay BST ";
cout<<"\n 4. Duyet theo thu tu truoc";
cout<<"\n 5. Duyet theo thu tu giua ";
cout<<"\n 6. Duyet theo thu tu sau ";
cout<<"\n 0. Thoat ";
cout<<"\n Dua vao lua chon:";cin>>choice;
switch(choice) {
case 1:
cout<<"\n Gia tri node can them:"; cin>> value;
root = insert(root, value);break;
case 2:
cout<<"\n Gia tri node can loai:"; cin>> value;
root = deleteNode(root, value);break;
case 3:
cout<<"\n Gia tri node can tim:"; cin>> value;
tmp = search(root, value);
if (tmp==NULL) cout<<"\n Node ko co tren cay";
//else cout<<"\n Node "<< tmp->value <<"co tren cay";
break;
case 4: preorder(root); break;
case 5: inorder(root); break;
case 6: postorder(root); break;
default:
if(choice!=0) cout<<"\n Lua chon sai"; break;
}
cout<<"\n Duyet truoc:"; preorder(root);


cout<<"\n Duyet sau:"; inorder(root);
cout<<"\n Duyet gi?a:"; postorder(root);
}while(choice!=0);
}
int main(){
BST X; X.Function();
}
