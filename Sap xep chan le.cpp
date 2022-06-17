#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int > A(n);
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}
	
	vector<int> odd;
	vector<int> even;
	for(int i=1; i<=n; i++){
		if(i % 2 == 0){
			even.push_back(A[i]);
		}
		else{
			odd.push_back(A[i]);
		}
	}
	
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	
	int pos_odd = 0, pos_even = even.size() - 1;
	for(int i=1; i<=n; i++){
		if(i % 2 == 0){
			cout << even[pos_even] <<" ";
			pos_even--;
		}
		else{
			cout << odd[pos_odd] << " ";
			pos_odd++;
		}
	}
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

