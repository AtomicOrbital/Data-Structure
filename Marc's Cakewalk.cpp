#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());
	
	long result = 0;
	for(int i=0; i<n; i++){
		result += pow(2, i) * A[i];
	} 
	cout << result << endl;
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


