#include<bits/stdc++.h>
using namespace std;

//Input:
//2
//5 7
//10 5 3 9 2
//5 6
//1 2 3 4 5
//Output:
//
//5 9 10 3 2
//5 4 3 2 1
int n,X; 
bool compare(pair<int,int> p1, pair<int,int > p2){
	if(abs(X - p1.first) == abs(X - p2.first)){
		return p1.second < p2.second;
	}
	return abs(X - p1.first) < abs(X - p2.first);
}

void solve(){
	cin >> n >> X;
	vector<int> A(n);
	
	vector<pair<int, int>> v;
	
	for(int i=0; i<n; i++){
		cin >> A[i];
		v.push_back({A[i] , i});
	}
	
	sort(v.begin(), v.end(),compare);
	for(auto p:v) cout << p.first << " ";
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

