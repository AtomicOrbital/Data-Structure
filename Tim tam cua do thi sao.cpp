#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
	int n;
	cin >> n;
	int dem[1000]={0};
	int u,v;
	for(int i=0;i<n;i++){
		cin >> u >> v;
		dem[u]++;
		dem[v]++;
	}	
	for(int i=1; i<=n+1; i++){
		if(dem[i] == n){
			cout << i;
			break;
		}
	}
}
