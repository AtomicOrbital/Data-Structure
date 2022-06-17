#include<bits/stdc++.h>
#include <cstring>
using namespace std;
int n,dau,cuoi;
vector<int> ke[1001];
bool chuaxet[1001];
void init(){
	for(int i=0;i<=1001;i++){
		ke[i].clear();
		chuaxet[i]=true;
	}
}
void BFS(int u,int v){
	queue<int> res;
	res.push(u);
	while(!res.empty()){
		int s=res.front();res.pop();
		chuaxet[s]=false;
		if(chuaxet[v]==false){
			cout<<"yes"<<endl;return;
		}
		for(int i=0;i<ke[s].size();i++){
			if(chuaxet[ke[s][i]]){
				chuaxet[ke[s][i]]=false;
				res.push(ke[s][i]);
			}
		}
	}
	cout<<"no"<<endl;
}

int main(){
	int t;
	t=1;
	while(t--){
       cin >> n >> dau >> cuoi;
       init();
       int u,v;
       while(){
			cin>>u>>v;
	       	ke[u].push_back(v);
	       	ke[v].push_back(u); 
	       	
	    }
	    cout << dau << cuoi;      
    	BFS(dau,cuoi);   
	}
   	return 0;
}
