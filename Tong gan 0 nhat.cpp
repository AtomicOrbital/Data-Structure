#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	int min = INT_MAX, ans = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int sumTwoDigit = abs(A[i] + A[j]);
			if(min > sumTwoDigit){
				min = sumTwoDigit; ans = A[i] + A[j];
			}
		}
	}
	cout << ans << endl;
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

