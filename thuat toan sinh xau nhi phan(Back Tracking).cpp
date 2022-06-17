#include<bits/stdc++.h>
using namespace std;
// sinh xâu nhị phân
int A[10]={};
int n = 3;
void output(){
	for(int i=1; i<=n; i++) cout << A[i] << " ";
	cout << endl; 
}

void backTrack(int index){
	for(int i=0; i<=1; i++){
		A[index] = i;
		if(index == n){
			output();
		}
		else{
			backTrack(index+1);
		}
	}
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	backTrack(1);

	
	return 0;
}



