#include<bits/stdc++.h>
using namespace std;

int test(string s){
	int size = s.length();
	for(int i=0;i<size/2;i++){
		if(s[i]!=s[size-1-i]) return 0;
	}
	return 1;
}

int main(){
	int t;
	t=1;
	while(t--){
      string s;cin>>s;
      int size = s.length();
      
	  	string tmp1="",tmp2="";
	  	string res1="",res2="";
	  	string s1="",s2="";
	  	for(int i=0;i<size/2;i++){
	  		if(s[i]==s[size-1-i]){
	  			tmp1= tmp1 + s[i]; 
	  		}
	        tmp2 = tmp2 + s[i];
		}
		
		tmp1=tmp1+s[size/2]; tmp2=tmp2+s[size/2];
		for(int i=size/2;i<size;i++){
			res1= res1 + s[i];
	  		if(s[i] == s[size-1-i]){
	  	        res2 = res2 + s[i]; 
	  		}
		}
		s1 = tmp1 + res1;
		s2 = tmp2 + res2;
		if(test(s1) || test(s2)) cout<<"true";
		else cout<<"false";    
	}
   	return 0;
}
