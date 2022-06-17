#include<bits/stdc++.h>
using namespace std;

string fixFiveToSix(string s){
	for(int i=0; i<s.length(); i++){
		if(s[i] == '5') s[i] = '6';
	}
	return s;
}

string fixSixToFive(string s){
	for(int i=0; i<s.length(); i++){
		if(s[i] == '6') s[i] = '5';
	}
	return s;
}

int toNum(string s){
	int tmp = 0;
	for(int i =0; i< s.length(); i++){
		tmp = tmp * 10 + s[i] + - '0';
	}
	return tmp;
}
void solve(){
	string s1,s2;	
	cin >> s1 >> s2;
	
	int min_first_number = toNum(fixSixToFive(s1));
	int min_second_number = toNum(fixSixToFive(s2));
	
	int max_first_number = toNum(fixFiveToSix(s1));
	int max_second_number = toNum(fixFiveToSix(s2));
	
	cout << min_first_number + min_second_number << " " << max_first_number + max_second_number;
	
}
int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
	solve();	
	return 0;
}

