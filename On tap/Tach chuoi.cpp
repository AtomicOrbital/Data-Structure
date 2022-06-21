#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int l = 0, r = 0;
	int ans = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i] == 'L') l++;
		if(s[i] == 'R') r++;
		if(l == r) ans++;
	}
	cout <<  ans << endl;
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



