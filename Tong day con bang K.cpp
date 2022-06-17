#include<bits/stdc++.h>
using namespace std;


int n,k,A[100],X[100];
vector<vector<int>> res;
void backTrack(int index){
	for(int i = 0;i <= 1;i++){
		X[index] = i;
	
		if(index == n){
			vector<int> ans;
			int sum = 0;
			for(int j=1; j<=n; j++){
				if(X[j]==1){
					sum+=A[j];
					ans.push_back(A[j]);
				}
			}	
			if(sum == k){
				res.push_back(ans);
			}		
		}
		else backTrack(index+1);
	}
}

int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int test = 1;
//	cin >> test;	
	while(test--){
		res.clear();
		cin >> n >> k;
		for(int i=1;i<=n;i++) cin>>A[i];
		backTrack(1);
		for(int i=0;i<res.size();i++){
			for(int j=0;j<res[i].size();j++) cout<<res[i][j]<<" ";
			cout<<endl;
		}
		cout<<res.size()<<endl;
	}
	return 0;
}
