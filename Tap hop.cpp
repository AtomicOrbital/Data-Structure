#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int A[20];
int dem;
void backTrack(int index){
	for(int i=A[index-1]+1; i<=n-k+index; i++){
		A[index] = i;
		if(index == k){
			int sum = 0;
			for(int j=1;j<=k;j++) sum+=A[j];
			if(sum == s) dem++;
		}
		else backTrack(index + 1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 100;
//	cin >> test;
	while(test--){
		dem = 0;
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		for(int i=0;i<=10;i++) A[i]=0;
		backTrack(1);
		cout << dem << endl;
	}	
	return 0;
}

