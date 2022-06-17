#include<bits/stdc++.h>
using namespace std;
// Input	Output
// 2
// 4 2		0011
// 			0101
// 			0110
// 			1001
// 			1010
// 			1100

// 3 2		011
// 			101
// 			110
int n,k,a[100];
void backTrack(int index){
	for(int i=0; i<=1;i++){
		a[index] = i;
		if(index == n){
			int count = 0;
			for(int j = 1;j <= n; j++){
				if(a[j] == 1) count++;
			}
			if(count == k){
				for(int j=1; j<=n; j++){
					cout << a[j] << " ";
				}
				cout << endl;
			}
		}
		else backTrack(index + 1);
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 	
	int test = 1;
	cin >> test;	
	while(test--){
		cin >> n >> k;
		backTrack(1);
	}
	return 0;
}



