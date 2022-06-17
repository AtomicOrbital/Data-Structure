#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	int max = INT_MIN, index;
	for(int i=0; i<n; i++){
		if(max < A[i]){
			max = A[i];
			index = i;
		}
	}
	if(index == n-1){
		cout << 0 << endl;
	}
	else cout << index+1 << endl;
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



