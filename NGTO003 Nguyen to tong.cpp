#include<bits/stdc++.h>
using namespace std;

long long prime(long long i){
	if(i == 2 || i == 3) return 1;
	if(i < 2) return 0;
	else if( i<= 3 ) return 0;
	else if(i % 2 == 0 || i % 3 == 0) return 0;
	else {
		for(int j=5; j<=sqrt(i); j+=6){
			if(i % j == 0 || i%(j+2) == 0){
				return 0;
			}
		}
		return 1;
	}
	
}

void solve(){
	long long n;
	cin >> n;
	
	if(n <= 2) n = 3;

	for(int i=n-2; i>0; i++){
		if(prime(i) && prime(i+2)){
			cout << i+2 << endl;
			break;			
		}
	}
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

