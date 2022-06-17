#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n;
	vector<int> res1;
	vector<int> res2;
	int x;
	for(int i=0; i<n; i++){
		cin >> x;
		res1.push_back(x);
	}
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> x;
		res2.push_back(x);
	}
	
	sort(res1.begin(),res1.end());
	sort(res2.begin(),res2.end());
	
	set<int> ans;
	for(int i=0; i<res2.size(); i++){
		if(res1.size() == 0) ans.insert(res2[i]);
		for(int j = 0; j<res1.size(); j++ ){
			if(res1[j] < res2[i]){
				res1.erase(res1.begin());
			}		
			else if(res1[j] == res2[i]){			
				res1.erase(res1.begin());
				break;
			}
			else if(res1[j] > res2[i]){
				ans.insert(res2[i]);
				break;
			}
		}		
	}
	for(auto x:ans){
		cout << x << " ";
	}
}
