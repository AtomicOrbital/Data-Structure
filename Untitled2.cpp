#include <iostream>
#include <iomanip>
using namespace std;
struct node {//bi?u di?n node trên cây
int data;//thành ph?n d? li?u c?a node
struct node *left;//thành ph?n liên k?t v?i cây con trái
struct node *right;// thành ph?n liên k?t v?i cây con ph?i
};
class BST {
public:
node *root; //ðây là cây nh? phân g?c root
BST(void){ //constructor c?a l?p
root = NULL; //ðý?c thi?t l?p ban ð?u là NULL
}
node *newNode(int value); //t?o node r?i r?c có giá tr? value
node* search(node* root, int value); //t?m node có giá tr? value trên cây
void preorder(node *root);//duy?t theo th? t? trý?c
void inorder(node *root); //duy?t theo th? t? gi?a
void postorder(node *root); //duy?t theo th? t? sau
node* insert(node* T, int value); //thêm node có giá tr? value vào cây T
node * minValueNode(node* p); //t?m node có giá tr? nh? nh?t trên cây g?c p
node* deleteNode(node* root, int data); //lo?i node có giá tr? vaule

void Function(void);//hàm th?c thi các thao tác
};
node *BST::newNode(int value){ //t?o node có giá tr? value
node *temp = new node;//c?p phát mi?n nh? cho node
temp->data = value; //thi?t l?p thành ph?n d? li?u
temp->left = NULL; //thi?t l?p liên k?t trái cho node
temp->right = NULL; //thi?t l?p liên k?t ph?i cho node
return temp; // node r?i r?c ðý?c t?o ra
}
node*BST:: search(node* root, int value){ //t?m node có giá tr? value trên cây
if (root == NULL || root->data == value) //n?u g?c r?ng ho?c t?m th?y node
return root; //tr? l?i node
if (root->data < value)//n?u node có giá tr? bé hõn value
return search(root->right, value);//t?m ? cây con ph?i
return search(root->left, value); //t?m ? cây con trái
}
void BST::preorder(node *root){ //duy?t theo th? t? trý?c
if (root != NULL){ //n?u cây không r?ng
cout<<root->data<<setw(3);//thãm node
preorder(root->left);//duy?t NLR cây con trái
preorder(root->right);//duyet NLR cay con ph?i
}
}
void BST::inorder(node *root){ //duy?t theo th? t? gi?a
if (root != NULL){ //n?u cây không r?ng
inorder(root->left); //duy?t LNR cây con trái
cout<< root->data<<setw(3);//thãm node
inorder(root->right); //duy?t LNR cây con ph?i
}
}
void BST::postorder(node *root){ //duy?t theo th? t? sau
if (root != NULL){ //n?u cây không r?ng
postorder(root->left); //duy?t LRN cây con trái
postorder(root->right); //duy?t LRN cây con ph?i
cout<< root->data<<setw(3);//thãm node
}
}


node* BST::insert(node* root, int value){//thêm node có giá tr? value
if (root == NULL) //n?u cây r?ng
return newNode(value); //ðây chính là node g?c
if (value < root ->data) //n?u ði?u này x?y ra
root ->left = insert(root ->left, value);//ta thêm vào cây con trái
else //trý?ng h?p value>node->data
root ->right = insert(root ->right, value); //ta thêm vào cây con ph?i
return root;//tr? l?i node
}
node *BST:: minValueNode(node* p){//tr? l?i node có giá tr? nh? nh?t trên cây g?c p
node *current = p;//current tr? ð?n p
while (current->left != NULL)//quay trái liên t?c
current = current->left;
return current; //ðây chính là node trái nh?t c?a cây g?c p
}
node*BST:: deleteNode(node* root, int value){//lo?i b? node có giá tr? value
if (root == NULL) //n?u cây r?ng
return root;//không có g? ð? lo?i b?
if (value < root->data) //n?u node c?n lo?i có giá tr? nh? hõn node g?c
root->left = deleteNode(root->left, value); //sang cây con trái ta lo?i
else if (value > root->data) //n?u node c?n lo?i có giá tr? l?n hõn node g?c
root->right = deleteNode(root->right, value); //sang cây con ph?i ta lo?i
else { //n?u t?m th?y node có giá tr? value
if (root->left == NULL){ //n?u node c?n lo?i ch? có cây con ph?i
node *temp = root->right;
free(root);
return temp;
}
else if (root->right == NULL) {//n?u node c?n lo?i ch? có cây con trái
node *temp = root->left;
free(root);
return temp;
}
// trý?ng h?p node có c? hai cây con
//ta l?y node trái nh?t c?a cây con ph?i
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
