#include<bits/stdc++.h>
using namespace std;

bool solve(string s1, string s2){
	int j = 0;
	for(int i=0; i<s2.size(); i++){
		if(s1[j] == s2[i]){
			j++;
		}
	}
	if(j == s1.size())
		return true;
	return false;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		string s1, s2;
		cin >> s1 >> s2;
		if(solve(s1, s2)) cout << "true";
		else cout << "false"; 
	}
	return 0;
}



