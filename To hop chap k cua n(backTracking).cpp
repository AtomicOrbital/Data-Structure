#include<bits/stdc++.h>
using namespace std;
// sinh tổ hợp
int A[100];
int n , k;
void init(){
	for(int i=1; i<=k;i++){
		A[i] = i;
	}
}
void output(){
	for(int i=1; i<=k; i++) cout << A[i];
		cout << " ";		
}

void backTrack(int index){
	for(int i=A[index-1] + 1; i<= n-k+index; i++){
		A[index] = i;
		if(index == k){
			output();
		}
		else{
			backTrack(index+1);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test;
	cin >> test;
	while(test--){
		cin >> n >> k;
		init();
		backTrack(1); 
		cout << endl;
	}
	
	return 0;
}



