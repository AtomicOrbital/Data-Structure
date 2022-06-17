// by hung nguyen
#include<bits/stdc++.h>
using namespace std;
int n,k;
int X[100],a[100];
vector<vector<int>> v;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		X[i]=j;
		if(i==n){
			int s=0;
			for(int h=1;h<=n;h++){
				if(X[h]) s+=a[h];
			}
			if(nt(s)){
				vector<int> res;
				for(int h=n;h>=1;h--)
				   if(X[h]) res.push_back(a[h]);
				v.push_back(res);
			}
		}
		else Try(i+1);
	}
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
		   cin>>a[i];
		sort(a+1,a+n+1);
		Try(1);
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++)
				cout<<v[i][j]<<" ";
			cout<<endl;
		}

		v.clear();
		cout<<endl;
	}
	return 0;
}


