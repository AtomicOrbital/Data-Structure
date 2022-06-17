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
		long long a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long number1 = 0, number2 = 0;
		
		for(int i=0; i<n; i+=2)  number1 = number1 * 10 + a[i];
		for(int i=1; i<n; i+=2)  number2 = number2 * 10 + a[i];
		cout << number1 + number2 << endl;
	}
	return 0;
}

