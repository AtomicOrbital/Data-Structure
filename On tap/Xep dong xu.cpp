#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int x = 1;
	while(n >= x){
		n = n - x;
		x++;
	}
	cout << x-1 << endl;
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



