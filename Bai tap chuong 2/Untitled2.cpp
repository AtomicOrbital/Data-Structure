#include <iostream>
#include <iomanip>
#define MAXSIZE 5
using namespace std;
typedef struct STK{ //bi?u di?n stack dùng m?ng
	int top; //v? trí di?n ra các thao tác

	int node[MAXSIZE];//các node d? li?u c?a ngan x?p
};

class STACK { //xây d?ng l?p thao tác cho stack
	public:
	STK s; //d?nh nghia s là m?t stack g?m MAX node
	void push (){ //l?y ph?n t? ra kh?i ngan x?p

	int value;//giá tr? c?a node
	if (s.top == (MAXSIZE - 1)){//n?u top ? v? trí MAX-1
	cout<<"Tràn Stack"<<endl;
	return;//ta không dua du?c ph?n t? vào ngan x?p
}
	else { //n?u stack chua tràn
	cout<<"Nhap phan tu:";cin>>value;
	s.top = s.top + 1; //d?ch chuy?n top lên m?t node
	s.node[s.top] = value; //t?i v? trí top ta luu tr? value
	}
}
int pop (){//l?y ph?n t? ra kh?i ngan x?p

	int value;
	if (s.top == - 1){//n?u stack r?ng
		cout<<"Stack rong"<<endl;
	return (INT_MIN);
	}
	else {//n?u stack không r?ng
		value = s.node[s.top]; //giá tr? node c?n l?y ra
		cout<<"Phan tu bi loai:"<<s.node[s.top]<<endl;
		s.top = s.top - 1; //gi?m s.top di 1
	}
	return(value);//giá tr? node b? l?y ra
}
void display (){//duy?t stack

	if (s.top == -1) { //n?u stack r?ng
	cout<<"Ta không có gì de duyet"<<endl; return;
}
else {
	cout<<"\n Noi dung stack: "<<endl;
	for (int i = s.top; i >= 0; i--)cout<<s.node[i]<<setw(3);
	}
}
	STACK(void){ //constructor c?a l?p
		s.top=-1; //thi?t l?p s.top là -1
	}
};
int main (){ //chuong trình chính
STACK X; //d?nh nghia d?i tu?ng X
int choice;
cout<<"CAC THAO TAC TREN STACK\n";
do {
	cout<<"------------------------------------------\n";
	cout<<" 1 --> PUSH \n";
	cout<<" 2 --> POP \n";
	cout<<" 3 --> DISPLAY \n";
		cout<<" 0 --> EXIT \n";
	cout<<"------------------------------------------\n";
	cout<<"Dua vao lua chon:";cin>>choice;
	switch (choice){
	case 1: X.push(); break;
	case 2: X.pop(); break;
	case 3: X.display(); break;
	default:
	cout<<"Lua chon sai"; break;
	}
	}while(choice!=0);
}
