#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	int index = -1;
	for(int i=0; i<n; i++){
		for(int j=n-1; j>i; j--){
			if(A[j] > A[i] && index < (j-i)) index = j - i;
		}
	}
	cout << index << endl;
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



