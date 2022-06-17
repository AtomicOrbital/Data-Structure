#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	
	int min1 = INT_MAX, min2 = INT_MAX;
	for(int i=0; i<n; i++) min1 = min(min1, A[i]);
	for(int i=0; i<n; i++) if(A[i] != min1) min2 = min(min2, A[i]);
	
	if(min2 == INT_MAX) cout << -1 << endl;
	else cout << min1 << " " << min2 << endl;
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

