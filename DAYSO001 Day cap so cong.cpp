#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	bool check = false;
	int d;
	
	for(int i=0; i<n; i++){
		if(i == 1)	d = A[1] - A[0];
		if(i >= 2 && check == false){
			if(A[i] - A[i-1] != d) check = true;
		}	  
	}
	if(check == false) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}

