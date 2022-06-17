#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		int n;cin >> n;
		// su dung set
//		set<int > s;
//		for(int i=0; i<n; i++){
//			int x; cin >> x;
//			s.insert(x);
//		}
		// su dung map
		map<int , bool> mp;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			mp[x] = true;
		}
		cout << mp.size() << endl;
	}
	return 0;
}



