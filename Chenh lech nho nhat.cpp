#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	sort(A.begin(), A.end());
	int max = INT_MAX;
	for(int i=0; i<n-1; i++){
		if(A[i+1] - A[i] < max) max = A[i+1] - A[i];
	}
	cout << max << endl;
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



