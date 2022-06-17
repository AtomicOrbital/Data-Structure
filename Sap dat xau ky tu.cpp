#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		string s;
		int k;
		cin >> k >> s;
		int dem[260] = {0};
		int max = 0;
		for(int i = 0; i < s.size(); i++){
			dem[s[i]]++;
			if(max < dem[s[i]]) max = dem[s[i]];
		}
		if(max > (s.length()+1)/k) cout << "-1";
		else cout << "1";
		cout << endl;
	}
	return 0;
}

