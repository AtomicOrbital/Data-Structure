#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {
	int f0 = 0, f1 = 1;
	int fn;
	for(int i=2; i<=n; i++){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	return fn;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		int n;
		cin >> n;
		cout << fibo(n) << endl;
	}
	return 0;
}



