#include<bits/stdc++.h>
using namespace std;

const int n = 1e6 + 5;
bool prime[n] = {};


void erathos(){
	for(int i=0; i<n; i++) prime[i] = true;
	
	for(int i=2; i<sqrt(n); i++){
		if(prime[i] == true){
			for(int j=2*i; j<n; j+=i) prime[j] = false;
		}
	}
}

void solve(){
	int n;
	cin >> n;
	
	bool checkFound = false;
	for(int i=2; i<n; i++){
		if(prime[i] && prime[n-i]){
			cout << i << " " << n - i << endl;
			checkFound = true;
			break;			
		}
	}
	if(!checkFound) cout << -1 << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	erathos();	
	int test = 1;
	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}

