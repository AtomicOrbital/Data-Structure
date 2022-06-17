#include<bits/stdc++.h>
using namespace std;
// Input		Output
// 2
// 5  3
// 1  4  5		2  3  4
// 5  3
// 3  4  5		1  2  3

int A[100];

void solve(){
	int n,k;
	cin >> n >> k;

	for(int i=0; i<k; i++) cin >> A[i];
	cout << endl;

	int position = k - 1;
	while(position >= 0 && A[position] == n - k + position + 1){
		position--;
	}	
	if(position == -1){
		for(int i=1; i<=k; i++){
			cout << i << " ";
		}
	}
	else{
		A[position] += 1;
		int val = A[position];
		for(int i=position+1; i<k; i++){
			val++;
			A[i] = val;
		}
		for(int i=0; i<k; i++){
			cout << A[i] << " ";
		}
	}
}

int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--) solve(); 
	return 0;
}



