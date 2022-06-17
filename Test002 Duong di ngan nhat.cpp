#include <bits/stdc++.h>
using namespace std;

int a[101][101],f[101][101],m,n;

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<102;i++)
        for(int j=0;j<102;j++) f[i][j]=1e7;
        cin>>m>>n;
        for(int i=1;i<=m;i++){
        	for(int j=1;j<=n;j++){
        		cin>>a[i][j];
			}
		}
                  
        int x, y;
        cin >> x >> y;
        f[x][y]=a[x][y];
        
        for(int j=1; j<=n; j++){
        	for(int i=1; i<=m; i++){
            	int tmp = min(f[i-1][j-1], f[i][j-1]);
            	tmp = min(tmp, f[i+1][j-1]);
            	f[i][j] = min(f[i][j],tmp+a[i][j]);
        	}
		}
        
        int ans = 1e7;
        for(int i=1;i<=m;i++){
        	ans = min(ans,f[i][n]);
		}         
        cout << ans << endl;
    }
    return 0;
}

