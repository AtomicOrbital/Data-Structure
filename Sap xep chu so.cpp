#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<long long> A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	set<long long> s;
	for(int i=0; i<n; i++){
		long long number = A[i];
		while(number > 0){
			s.insert(number % 10);
			number /= 10;	
		}
	}
	for(auto p:s) cout << p << " ";
	cout << endl;
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

