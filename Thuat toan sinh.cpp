#include<bits/stdc++.h>
using namespace std;
// Ví dụ với n = 4 ta tìm được 4 xâu nhị phân thuận nghịch như dưới đây.
// 				0                      0                      0                      0         
// 				0                      1                      1                      0         
// 				1                      0                      0                      1         
// 				1                      1                      1                      1

int n,k,a[100];
void backTrack(int index){
	for(int i = 0;i <= 1;i++){
		a[index] = i;
		if(index == n){
			int ok = 1;
			for(int index=1; index <=n;index++){
				if(a[index] != a[n-index+1]){
					ok=0;break;
				}
			}
			if(ok == 1){
				for(int l=1;l<=n;l++){
					cout << a[l] << " ";
				}
				cout << endl;
			}
		}
		else backTrack(index+1);
	}
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 	
	int test = 1;
	// cin >> test;	
	while(test--){
		cin >> n;
		backTrack(1);
	}
	return 0;
}



