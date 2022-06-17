#include<bits/stdc++.h>
using namespace std;

vector<int > res;

bool checkPrime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return n>1;
}


void solve(){
	for(int i=1; i<= 100; i++){
		if(checkPrime(i)){
			long long x = pow(2, i);
			if(checkPrime(i)){
				long long numberPerfect = (x * (x-1)) / 2;
				res.push_back(numberPerfect);
			}
		}
	}
}

bool checkNumberPerfect(long long n){
	for(int i=0; i<res.size(); i++){
		if(res[i] == n) return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	solve();
	while(test--){
		long long n;
		cin >> n;
		if(checkNumberPerfect(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}

