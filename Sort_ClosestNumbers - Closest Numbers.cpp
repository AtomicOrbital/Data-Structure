#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	sort(A.begin(), A.end());
	
	int minEle = A[1] - A[0];
	for(int i=2; i<n; i++){
		minEle = min(minEle, A[i] - A[i-1]);
	}
	for(int i=0; i<n; i++){
		if((A[i] - A[i-1]) == minEle){
			cout << A[i-1] << " " << A[i] << " ";
		}
	}
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


