#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int > A(n);
	
	int count;
	for(int i=0; i<n; i++){
		cin >> A[i];
		if( A[i] == k ){
			count = i + 1;
		}
	}
	cout << count << endl;
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



