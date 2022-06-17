#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
		
	int tmp = 0;
	int count = 0;
	sort(A.begin(), A.end());
	
	tmp = A[0];	
	for(int i=0; i<n; i++){
		if(A[i] > tmp + 4){
			count++;
			tmp = A[i];
		}
	}
	
	cout << count+1 << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}


