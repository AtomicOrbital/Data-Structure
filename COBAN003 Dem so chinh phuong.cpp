#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){	
		long long L, R;
		cin >> L >> R;
		long long min = sqrt(L);
		if(min * min != L){
			min = min + 1;
		}
		long long max = sqrt(R);
		cout << max - min + 1 << endl;
	}
	return 0;
}

