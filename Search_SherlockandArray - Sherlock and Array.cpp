#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0; i<n; i++ ) cin >> A[i];
	
	int start = 0, end = n - 1;
	int sum1 = 0, sum2 = 0;
	for(int i=0; i<n; i++){
		if(i == 0){
			sum1 = sum1 + A[start];
			sum2 = sum2 + A[end];
		}
		else if(start < end){
			if(sum1 < sum2){				
				sum1 += A[++start];
			}
			else{
				sum2 = sum2 + A[--end];
			}
		}			
	}
//	cout << sum1 << " " << sum2 << endl;
	if( sum1 == sum2 ) cout << "YES" << endl;
	else cout << "NO" << endl;
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

