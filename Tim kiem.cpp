#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n, X;
	cin >> n >> X;
	
	bool check = false;
	vector<int> A(n);
	
	for(int i=0; i<n; i++){
		cin >> A[i];
		if(A[i] == X) check = true;
	}
	if(check) cout << "1" << endl;
	else cout << "-1" << endl;
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

