#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	for(int i=0; i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[j] < A[i])swap(A[i], A[j]);
		}
		cout << "Buoc " << i+1 <<": ";
		for(int i=0; i<n; i++) cout << A[i] << " ";
		cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		solve();	}
	return 0;
}

