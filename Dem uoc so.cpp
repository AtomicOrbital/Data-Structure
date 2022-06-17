#include<bits/stdc++.h>
using namespace std;
//int nCk(int n, int k){
//	int c[n+1][k+1];
//	for(int i=0; i<=n; i++){
//		for(int j=0; j<=min(i,k); j++){
//			if(j == 0 || j == i)
//				c[i][j] = 1;
//			else
//				c[i][j] = c[i-1][j-1] + c[i-1][j];
//		}
//	}
//	return c[n][k];
//}
long long  nCk(int n, int k){
    int C[431];
    memset(C, 0, sizeof(C));
 
    C[0] = 1;
 
    for (int i = 1; i <= n; i++){
        for (int j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j - 1];
    }
    return C[k];
}
void solve(){
	int n, k;
	cin >> n >> k;
	int count = 0;
	long long tmp = nCk(n,k);
	for(int i=1; i<=sqrt(tmp); i++){
		if( tmp % i == 0 ){
			if(tmp / i == i) count++;
			else count = count + 2;
		}
	}
	cout << count <<  endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test;
//	cin >> test;
	while(scanf("%d",&test) != -1){
		
		solve();
	}
	return 0;
}

