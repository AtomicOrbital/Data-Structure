#include<bits/stdc++.h>
using namespace std;

string solve(){
	int n, k;
	cin >> n >> k;
	vector <int > A(n),B(n);
	
	for(int i=0; i<n; i++){
		cin >> A[i];
	}	
	for(int i=0; i<n; i++){
		cin >> B[i];
	}
		
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());
	
	for(int i=0; i<n; i++){
		if(A[i] + B[i] < k){
			return "NO";
		}
	}
	return "YES";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){		
		cout << solve() << endl;
	}
	return 0;
}


