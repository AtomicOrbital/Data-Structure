#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int>nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];	
	vector<pair<int, int>>v;
	
	for(int i=0; i<nums.size(); i++){
	    v.push_back({nums[i], i});
	}
	sort(v.begin(), v.end());
	int s=0;
	for(int i=0; i<v.size(); i++){
	    if(v[i].second !=i ){
	        swap(v[i], v[v[i].second]);
	        s++;
	        i--;
	    }
	}
	cout << s << endl;	
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

