#include<bits/stdc++.h>
using namespace std;

bool numberDigit(long long n){
	while(n > 0){
		int r = n % 10;
		if(r == 1 || r == 2 || r == 3 || r == 5 || r == 6 || r == 7 || r == 8) return false;
		n = n / 10;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		int k;
		cin >> k;
		int x = ceil(sqrt(pow(10, k-1))), y = ceil(sqrt(pow(10, k)));
		int check = false;
		
		if( k == 1) cout << "1" << endl;
		else if(k % 2 == 1) cout << (long long) pow(10, k-1) << endl;
		else {
			while(x < y){
			long long number = pow(x, 2);
			if(numberDigit(number) == true) {
				check = true;
				cout << number << endl;	
				break;
			}
			x++;
			}
		if(check == false) cout << "-1" << endl;
		}	
	}
	return 0;
}

