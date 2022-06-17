#include<bits/stdc++.h>
#define ll long long
using namespace std;
int A[30] = {};
int B[30] = {};
bool check = false;
int len;
int n, S, sum = 0;
void backTrack(int index){
	if( check == true) return;
	
	for(int i=B[index - 1] + 1; i<=n; i++){
		B[index] = i;
		sum += A[i];
		if(index == len && sum == S){
			check = true;
			return; 
		}
		else if(index < len) backTrack(index + 1);
		sum -= A[i];
	}
}

void solve(){
	check = false;
	
	cin >> n >> S;
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}
	int ans = -1;
	for(int i=1; i<=n; i++){
		sum = 0;
		len = i;
		backTrack(1);
		if(check == true){
			ans = i;
			break;
		}
	}
	cout << ans << endl;
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

