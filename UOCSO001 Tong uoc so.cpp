#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		
		if(n == 1) cout << "0" << endl;
		else {
			int sum = 1;
			for(int i=2; i<=sqrt(n); i++){
				if(n % i == 0) {
					sum = sum + i;
					if(n/i != i) sum = sum + n/i;										
				}	
			}
			cout << sum << endl;
		}
	}
	return 0;
}
