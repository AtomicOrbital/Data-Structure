#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> prices(n);
	for(int i=0; i<n; i++) cin >> prices[i];
	
	sort(prices.begin(), prices.end());
	
	int count = 0; 
	int sum = 0;
	for(int i=0; i<prices.size(); i++){
		if(sum + prices[i] <= k){
			count++;
			sum += prices[i];
		}
	}
	cout << count << endl;	
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


