#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n, m;
	cin >> n;
	string s[n];
	for(int i=0; i<n; i++) cin >> s[i];
	
	cin >> m;
	string str[m];
	for(int i=0; i<m; i++) cin >> str[i];
	
	for(int i=0; i<m; i++){
		int flag = 0;
		for(int j=0; j<n; j++){
			if(str[i] == s[j]){
				flag++;
			}
		}
		cout << flag << endl;
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


