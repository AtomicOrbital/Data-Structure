#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	int A[n][n];
	int ok = 0;
	cout << "[";
	for(int i=0; i<n; i++){	
		cout << "[";	
			for(int j=0; j<=i; j++){
				if(i == j || j == 0){
					A[i][j] = 1;
					cout << A[i][j];				
				}
				else{
					A[i][j] = A[i-1][j-1] + A[i-1][j];
					cout << A[i][j];
				}
				if(i != j) cout << ',';		
			}	
			cout << "]";
			if(i != n-1) cout << ',';
	}
	
	cout << "]";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		int n;
		cin >> n;
		solve(n); 
	}
	return 0;
}
