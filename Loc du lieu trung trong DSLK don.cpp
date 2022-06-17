#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> A(n);
	int dem[10000];
	for(int i=0;i<n;i++){
    	cin >> A[i];
		dem[A[i]]=1;
	}
	
    for(int i=0;i<n;i++){
    	if(dem[A[i]]==1){
    		cout<<A[i]<<" ";
    		dem[A[i]]=0;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
//		solve();
		int n;cin>>n;
		int a[n];
		unordered_map<int,int> ans;
		
		for(int i=0;i<n;i++){
			cin>>a[i];
			ans[a[i]]=1;
		}
		for(int i=0;i<n;i++){
			if(ans[a[i]]==1){
				cout<<a[i]<<" ";
				ans[a[i]]=0;
			}
		}
//		for(auto &x: ans){
//			cout<<x.first<<" ";
//		}
	}
	return 0;
}

