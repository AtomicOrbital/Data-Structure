#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	
	cin>>test;
	cin.ignore();
	vector<int> res;
	stack<int> ans;
		
	while(test--){
		string s;
		getline(cin, s);
		if(s[0]=='1'){
			int n=0;
			for(int i=2; i<s.length(); i++){
				n = n*10 + (s[i]-'0');
			}
			
			res.push_back(n);
			ans.push(n);
		}
		else if(s[0] == '2'){
			ans.pop();
			res.pop_back();
		}
		else{
			cout<< *max_element(res.begin(), res.end())<<endl;
		}
		
	}
	return 0;
}
