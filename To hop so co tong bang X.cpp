#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
vector<vector<int>> res;
void backTrack(int i, int sum,vector<int> ans){
	if(sum > k) return;
	else if(sum == k){
		res.push_back(ans);
		return;
	}
	for(int j=i; j<=n; 	j++){
		if(sum + a[j] <= k){
			ans.push_back(a[j]);
			backTrack(j,sum+a[j],ans);
			ans.pop_back();
		}
	}
}

void in(){
	if(res.size() == 0){
		cout << "-1" << endl;
	return;
	}
	for(int i=0; i<res.size(); i++){
		int x = res[i].size();
		cout << "[";
		for(int j=0; j<x-1; j++){
			cout << res[i][j] << " ";
		}
		cout << res[i][x-1] << "]";
	}
	cout << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		cin >> n >> k;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		vector<int> ans;
		backTrack(1,0,ans);
		in();
		res.clear();
		ans.clear();
	}
	return 0;
}

