#include<bits/stdc++.h>
using namespace std;
int a,b,n, k;
vector<vector<int> >res;
void solve(){
	vector<int> tmp;
	int sum=0;
	for(int i=0;i<res.size();i++){
		if(res[i][1] == 0) sum+=res[i][0];
		else tmp.push_back(res[i][0]);
	}
	sort(tmp.begin(), tmp.end(),greater<int>());
	for(int i=0;i<tmp.size();i++){
		if(i<k) sum+=tmp[i];
		else sum-=tmp[i];
	}
	cout<<sum<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		cin >> n >> k;
		res.clear();
		vector<int> ans;
		for(int i=0; i<n; i++){
			ans.clear();
			cin >> a >> b;
			ans.push_back(a);ans.push_back(b);
			res.push_back(ans);			
		} 		
		solve(); 
	}
	return 0;
}
