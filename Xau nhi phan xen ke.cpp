#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
//	int test = 1;
//	cin >> test;
//	while(test--){
//
//	}
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		if(i % 2 == 0){
			cout << 0 << " ";
		}
		else cout << 1 << " ";
	}	
	cout << endl;
	for(int i=0; i<n; i++){
		if(i % 2 != 0){
			cout << 0 << " "; 
		}
		else cout << 1 << " ";
	}
	return 0;
}

