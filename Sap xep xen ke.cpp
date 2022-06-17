#include<bits/stdc++.h>
using namespace std;

//Input:	
//2
//7
//7 1 2 3 4 5 6
//8
//1 6 9 4 3 7 8 2
//Output:	
//7 1 6 2 5 3 4
//9 1 8 2 7 3 6 4

void solve(){
	int n;
	cin >> n;
	vector<int >A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	
	sort(A.begin(), A.end());
	
	int index_min = 0, index_max = n - 1;
	
	for(int i=0; i<n; i++){
		if(i % 2 == 0){
			cout << A[index_max] << " ";
			index_max--;
		}
		else{
			cout << A[index_min] << " ";
			index_min++;
		}
	}
	cout << endl;
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}

