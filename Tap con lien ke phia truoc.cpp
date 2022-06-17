#include<bits/stdc++.h>
using namespace std;

//Input
//2
//
//5  3
//
//2  3  5
//
//5  3
//
//1  2  3
//Output
//
//2 3 4
//
//3 4 5

//so dung sau bang so dung truoc cong 1
// Neu o cau hinh dau tien sinh ra cau hinh cuoi cung -> i==1&&a[i]==1
//Neu o cau hinh hien tai nao do a[i]-- giam ve cau hinh phia truoc
int n,k,a[1001];
void sinh(){
	int i=k;
	while(i>1&&a[i]==(a[i-1]+1)) i--;
	if(i==1&&a[i]==1){
			for(int j=1;j<=k;j++) a[j]=n-k+j;
	}
	else{
		a[i]=a[i]-1;
		for(int j=i+1;j<=k;j++) a[j]=n-k+j;
	}
	return;
}

void in(){
	for(int i=1; i<=k;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=n;i++) cin >> a[i];
		sinh();
		in();	
	}
	return 0;
}



