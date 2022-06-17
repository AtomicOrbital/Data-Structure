#include<bits/stdc++.h>
using namespace std;
// Input	Output
// 2
// 010101	010110
// 111111	000000

void solve(){
	string s;
	cin >> s;

	int position = s.length() - 1;
	while(position >= 0 && s[position] == '1'){
		s[position] = '0';
		position--;
	}

	if(position == -1){
		cout << s << endl;
	}	
	else{
		s[position] = '1';
		cout << s << endl;
	}	
}

int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--) solve(); 
	return 0;
}



