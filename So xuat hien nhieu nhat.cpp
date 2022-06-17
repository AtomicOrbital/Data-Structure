#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	unordered_map<int , int > mp;
	for(int i=0; i<n; i++){
		mp[A[i]]++;
	}
	int check = 0;
	for(auto p:mp){
		if(p.second > n/2){
			cout << p.first << endl;
			check = 1;
			break;
		}
	}
	if( check == 0) cout << "NO" << endl;
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



