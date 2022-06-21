#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin >>n;
	vector<int > A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	int max = 0;
	int  index = 0;
	sort(A.begin(), A.end());
	for(int i=0; i<n; i++){
		int count = 1;
		if(A[i] == A[i+1]){
			count++;		
		}
		if(count < max){
			max = count;
			index = i;
		}
	}
	cout << A[index] << endl;
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



