#include<bits/stdc++.h>
using namespace std;

//Input
//2
//2  7  28
//3  2  23
//Output
//1
//11 17
//2
//3 7 13
//5 7 11
int n,p,s;
int sum = 0;
vector<vector<int>> v;
bool sieve(int i){
	if(i < 2) return false;
	else if(i <= 3) return true;
	else if( i % 2 == 0 || i % 3 == 0 ) return false;
	else{
		for(int j=5; j<=sqrt(i); j+=6){
			if(i % j == 0 || (i % (j + 2)) == 0) return false;
		}
		return true;
	}
}

void backTrack(int n, int p ,int s, vector<int> res){
	if( sum > s) return;
	if(res.size() == n && sum == s){
		v.push_back(res);
		return;
	}
	for(int i=p+1;i<=200;i++){
		if(sieve(i)){
			if(res.size() < n && sum + i <= s){
				sum += i;
				res.push_back(i);
				backTrack(n, i, s, res);
				res.pop_back();
				sum = sum - i;
			} 			
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		cin >> n >> p >> s;
		v.clear();
		vector<int> res;
		backTrack(n, p, s, res);
		sort(v.begin(),v.end());
		cout << v.size() << endl;
		for(int i=0; i<v.size(); i++){
			for(int j=0; j<v[i].size();j++){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}	
	}
	return 0;
}

