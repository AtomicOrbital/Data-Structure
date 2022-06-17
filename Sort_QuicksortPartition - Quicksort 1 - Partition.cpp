#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> A(n);
	vector<int> left, right, equal, result;
	for(int i=0; i<n; i++) cin >> A[i];
	
	for(auto x:A){
		if(x > A[0])
			right.push_back(x);
		else if(x < A[0])
			left.push_back(x);
		else
			equal.push_back(x);
	}
	
	for(auto it:left) result.push_back(it);
	for(auto it:equal) result.push_back(it);
	for(auto it:right) result.push_back(it);
	
	for(auto x:result) cout << x << " ";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		solve();
	}	
	return 0;
}


