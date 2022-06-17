#include<bits/stdc++.h>
using namespace std;
// Input	Output
// 2
// 2		12  21
// 3		123 132  213  231  312  321

vector<vector<int>> res;
vector<int> ans;
int n, k, a[100], ok = 1;
void init(){
	for(int i = 1; i<=k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]++;
		for(int j=i+1; j<=k;j++){
			a[j] = a[j-1] + 1;
		}
	}
}

void in(){
	ans.clear();
	for(int i=1;i<=k;i++){
		ans.push_back(a[i]);
	}
	res.push_back(ans);
}
int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 	
	int test = 1;
	cin >> test;	
	while(test--){
		res.clear();
		ans.clear();
		cin >> n >> k;
		ok = 1;
		init();
		while(ok){
			in();
			sinh();
		}
		for(int i=res.size()-1;i>=0;i--){
			for(int j=0;j<res[i].size();j++){
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}

	}
	return 0;
}
