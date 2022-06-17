#include<iostream>
using namespace std;

//Nhap danh sach stack chua cac so nguyen, sau do xuat ra man hinh cac so nguyen do

//Khai bao cau cua 1 cai node

struct node{
	int data; // stack dang chua cac so nguyen
	struct node *pNext; // con tro lien ket giua cac node voi nhau
};



typedef struct node NODE;

struct stack{
	NODE *pTop; // dung con tro dau de quan ly stack
};

typedef struct stack STACK;

// ham khoi tao stack

void KhoiTaoStack(STACK &s){
	s.pTop = NULL;
}

//Ham khoi tao 1 cai node
NODE *KhoiTaoNode(int x){
	NODE *p = new NODE();
	if(p == NULL){
		cout << "Khong du bo nho de cap phat !!!" << endl;
		return NULL;
	}
	p->data = x; // them gia tri cua bien x vao trong data cua node
	p->pNext = NULL;
	return p;
}


// =============== KIEM TRA STACK CO RONG HAY KHONG ===============
bool IsEmpty(STACK &s){
	// Neu danh sach rong
	if(s.pTop == NULL){
		return true;
	}
	else return false; // danh sach co phan tu
}

// =============== THEM 1 PHAN TU VAO DAU STACK =================
bool Push(STACK &s, NODE *p){
	if(p == NULL ) return false;
	// Neu danh sach rong
	if(IsEmpty(s) == true){
		s.pTop = p; // node p chinh la node dau cua stack
	}
	else{ // danh sach da co phan tu
		p->pNext = s.pTop; // cho con tro cua node p tro den node dau cua danh sach de tao lien ket
		s.pTop = p; // cap nhat lai node dau
	}
	return true;
}

// =============== LAY PHAN TU DAU STACK VA HUY NO DI =================
bool Pop(STACK &s, int &x){
	// neu danh sach rong
	if(IsEmpty(s) == true){
		return false;
	}
	else{
		NODE *p = s.pTop; // node p chinh la node the de ti nua chung ta xoa no di
		x = p->data; // gan gia tri cua node dau stack vao bien x
		s.pTop = s.pTop->pNext; // cap nhat node dau stack la node tiep theo
		delete p; // xoa node dau vua lay 
	}
}

// =============== XEM THONG TIN CUA PHAN TU DAU STACK - KHONG HUY NO DI =================

bool Top(STACK &s, int &x){ // x chinh la gia tri can lay ra de xem
	if(IsEmpty(s) == true){
		return false;
	}
	x = s.pTop->data; // lay gia tri phan tu dau cua stack ra xem
	return true;
}

//ham xuat stack
void XuatStack(STACK s){
	while(IsEmpty(s) == false){
		int x;
		Pop(s, x);
		cout << x << " ";
	}
}

// ham nhap cac so nguyen trong stack
void NhapStack(STACK &s){
	int luachon;
	
	while(true) {
		cout << "\n\n\t\t ============ Menu ============";
		cout << "\n\t1. Them phan tu vao stack";
		cout << "\n\t2. Xuat danh sach stack";
		cout << "\n\t0. Ket thuc";
		cout << "\n\n\t\t ============ End ============";
		
		
		cout << "\nNhap lua chon: " << endl;
		cin >> luachon;
		
		if(luachon == 1){
			int x;
			cout << "Nhap phan tu can them: ";
			cin >> x;
			NODE *p = KhoiTaoNode(x);
			Push(s, p);
		}
		else if( luachon == 2){
			XuatStack(s);
			system("pause/n");
		}
		else break;
	}
}

int main(){
	STACK s; 
	KhoiTaoStack(s);
	
	NhapStack(s);
	system("pause/n");
	return 0;
}

