#include<bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long powMOD(long long a, long long n){
	if(n == 0) return true;
	long long x = powMOD(a, n/2);
	if(n % 2 == 1)
		return (a % MOD * x % MOD  * x % MOD) % MOD;
	else
		return (x % MOD * x % MOD) % MOD;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		long long a, b;
		cin >> a >> b;
		cout << powMOD(a, b) << endl;
	}
	return 0;
}

