#include <iostream>
using namespace std;
// khai bao cau truc node
struct node{
	int data;
	struct node *pNext;
};
typedef struct node Node;

// khai bao cau truc stack
struct stack{
	struct node *pTop;
};
typedef struct stack Stack;

//Khoi tao stack
void create(Stack &s){
	s.pTop=NULL;
}

//Kiem tra stack rong
bool IsEmpty(Stack s){
	if(s.pTop==NULL){
		return true;
	}
	return false;
}

int main(){
	Stack s;
	create(s);
	if(IsEmpty(s)){
		cout<<"1";
	}
	return 0;
}
