#include<bits/stdc++.h>
using namespace std;

int solve(string s) {
    int n=s.size();
    map<char,int> mp;
        
    int t=n/4;
    bool flag=true;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
        
    for(auto it:mp){
        if(it.second!=t){
            flag=false;
            break;
        }
    }
         
    if(flag==true){
        return 0;
    }
        
    map<char,int> mp1;
    map<char,int> mp2;
    for(auto it:mp){
        if(it.second>t){
            mp1.insert({it.first,it.second-t});
        }
    }
        
    int l=0,r=0;
    int res=INT_MAX;
    int cnt=0;
    while(r<n){
        mp2[s[r]]++;
        bool flag=true;
        for(auto it:mp1){
            if(mp2[it.first]<it.second){
                flag=false;
                break;
            }
        }
            
    while(flag==true){
        res=min(res,r-l+1);
        mp2[s[l]]--;
        l++;
        for(auto it:mp1){
    		if(mp2[it.first]<it.second){
                flag=false;
                break;
            }
        }
    }
        r++;
    }       
    return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}



