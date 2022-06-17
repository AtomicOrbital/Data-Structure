#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	string str;
	map<string, int> m;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> str;
		m[str]++;
	}
	
	cin >> k;
	for(int i=0; i<k; i++){
		cin >> str;
		cout << m[str] << endl;
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


