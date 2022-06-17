#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
	if(p1.second == p2.second){
		return p1.first < p2.first;
	}
	return p1.second > p2.second; 
}

void solve(){
	int n;
	cin >> n;
	
	vector<int > A(n);
	map<int, int> count;
	for(int i=0; i<n; i++){
		cin >> A[i];
		count[A[i]]++;
	}
	
	vector<pair<int, int>> v;
	for(auto x:count) v.push_back(x);
	
	sort(v.begin(), v.end(), compare );
	
	for(auto p:v){
		while(p.second--){
			cout << p.first << " ";
		}
	}
	cout << endl;
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



