#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> A(n), B(n);
	for(int i=0; i<n; i++){
		cin >> A[i];
		B[i] = A[i];
	}
	
	sort(B.begin(), B.end());
	
	int Left;
	for(int i=0; i<n; i++){
		if(A[i] != B[i]){
			Left = i + 1;
			break;
		}
	}
	int Right;
	for(int i=n-1; i>=0; i--){
		if(A[i] != B[i]){
			Right = i + 1;
			break;
		}
	}
	
	cout << Left << " " << Right << endl;
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

