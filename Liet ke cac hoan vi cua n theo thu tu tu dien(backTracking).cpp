#include<bits/stdc++.h>
using namespace std;
// liệt kê các hoán vị của n theo thứ tự từ điển
int A[10]={};
int n = 10;
bool vis[10]={};
void output(){
	for(int i=1; i<=n; i++) cout << A[i] << " ";
	cout << endl; 
}

void backTrack(int index){
	for(int i=1; i<=n; i++){
		if(vis[i]) continue;
		A[index] = i;
		vis[i] = true;
		if(index == n) output();
		else backTrack(index + 1);
		vis[i] = false;
	}
}
int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	backTrack(1); 
	return 0;
}



