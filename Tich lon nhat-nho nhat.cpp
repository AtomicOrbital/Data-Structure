#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n, m;
	cin >> n >> m;
	vector<long long > A(n), B(m);
	for(int i=0; i<n; i++) cin >> A[i];
	for(int i=0; i<m; i++) cin >> B[i];
	
	long long max = A[0];
	for(int i=0; i<n; i++){
		if(A[i] > max) max = A[i];
	}
	
	long long min = B[0];
	for(int i=0; i<m; i++){
		if(B[i] < min) min = B[i];
	}
	
	cout << max * min << endl;
	
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



