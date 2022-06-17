#include<bits/stdc++.h>
using namespace std;

int nhiphan(int n){
	int r;
	int sum = 0;
	while(n > 0){
		r = n % 2;
        sum = sum + r ;
        n = n / 2;
       
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		int n;
		cin >> n;
		cout << '[';
		for(int i=0; i<=n; i++){
			cout << nhiphan(i);
			if(i != n ) cout<<',';
		}
		cout << ']';
	}
	return 0;
}
