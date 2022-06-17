#include<bits/stdc++.h>
using namespace std;



// khai bao node
struct Node{
	int data;//thành phân du lieu
	struct Node*left; // thanh con tro den cây bên trái
	struct Node*right; // thanh con tro dên cây bên phai
	int height; // chi sô cân bang cua cây
};

//Tìm giá tri lon nhât cua hai sô
int find_max(int a, int b) {
  return (a > b) ? a : b;
}

//Tìm chieu cao cua cây
int height(struct Node *Nod) {
  if (Nod == NULL)
    return 0;
  return Nod->height;
}
// Tao nút
struct Node *create_node(int data) {
  struct Node *new_node = (struct Node *)
    malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  new_node->height = 1;
  return (new_node);
}



// Xoay phai
struct Node *rotate_right(struct Node *y) {
  struct Node *x = y->left;
  struct Node *T2 = x->right;
  x->right = y;
  y->left = T2;
  y->height = find_max(height(y->left), height(y->right)) + 1;
  x->height = find_max(height(x->left), height(x->right)) + 1;
  return x;
}

// Xoay trái
struct Node *rotate_left(struct Node *x) {
  struct Node *y = x->right;
  struct Node *T2 = y->left;
  y->left = x;
  x->right = T2;
  x->height = find_max(height(x->left), height(x->right)) + 1;
  y->height = find_max(height(y->left), height(y->right)) + 1;
  return y;
}

// lây hê sô cân bang
int get_balanceFactor(struct Node *Nod) {
  if (Nod == NULL)
    return 0;
  return height(Nod->left) - height(Nod->right);
}

// thêm node
struct Node *add_node(struct Node *node, int data) {
  // Tìm vi trí thích hop de thêm nút
  if (node == NULL)
    return (create_node(data));
  if (data < node->data)
    node->left = add_node(node->left, data);
  else if (data > node->data)
    node->right = add_node(node->right, data);
  else
    return node;
  // Câp nhât hê sô cân bang và cân bang cây
  node->height = 1 + find_max(height(node->left),
               height(node->right));
  int balance = get_balanceFactor(node);
  if (balance > 1 && data < node->left->data)
    return rotate_right(node);
  if (balance < -1 && data > node->right->data)
    return rotate_left(node);
  if (balance > 1 && data > node->left->data) {
    node->left = rotate_left(node->left);
    return rotate_right(node);
  }
  if (balance < -1 && data < node->right->data) {
    node->right = rotate_right(node->right);
    return rotate_left(node);
  }
  return node;
}



//Duyet
void NLR(Node *t){
    if(t){
        cout<< t->data << " ";
        NLR(t->left);
        NLR(t->right);
    }
}

int main()
{
  Node *root = NULL;
  root = add_node(root, 10);
  root = add_node(root, 32);
  root = add_node(root, 14);
  root = add_node(root, 13);
  root = add_node(root, 45);
  cout << "In cay theo thu tu" << endl;
  NLR(root);
  
  return 0;

}


