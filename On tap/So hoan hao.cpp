#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin >> n;
	int sum = 0;
	for(int i=1; i<n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(sum == n) cout << "true" << endl;
	else cout << "false" << endl;
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



