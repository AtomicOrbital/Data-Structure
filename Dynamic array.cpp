#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n = 0, q = 0;
    int lastAnswer = 0;
    int type, x, y;
    int tmp = 0;
    int pos;
    
    cin >> n >> q;
    
    vector < vector <int>> A(n);
    
    for (int i = 0; i < q; i ++) {
        cin >> type >> x >> y;
        tmp = ((x ^ lastAnswer) % n);
       // cout << seq << endl;
        if (type == 1) {
            A[tmp].push_back(y);
//            cout << (tmp) << " <-- " << y << endl;
        }
        else if (type == 2) {
            pos = (y % A[tmp].size());
            //cout << "pos " << pos << endl;
            lastAnswer = A[tmp][pos];
            cout << lastAnswer << endl;
        }
        
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}


