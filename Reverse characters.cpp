#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
	string tmp="";
	for(int i=s.length()-1;i>=0;i--){
		tmp=tmp+s[i];
	}
	return tmp;
}

int main() {    
		vector<string> res;
 		ifstream file("source.txt");
	    string str; 
	    while (getline(file, str)){
	        string x = reverse(str);
			res.push_back(x);
	    }
		ofstream  daonguoc("reverse.txt");
		for(int i=res.size()-1; i>=0; i--){
			daonguoc << res[i];
			daonguoc << "\n";
		}
	return 0;
}
