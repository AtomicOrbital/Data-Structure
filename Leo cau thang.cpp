#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int dp[n+1];
	dp[0] = 1;
	dp[1] = 1;
	for(int i=2; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}	
	cout << dp[n];
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



