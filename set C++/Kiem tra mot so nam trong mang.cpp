#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
//		int n; cin >> n;
//		int a[n];
//		for(int &x:a) cin >> x;
//		sort(a, a+n);
//		int q; cin >> q;
//		while(q--){
//			int x; cin >> x;
//			if(binary_search(a, a+n, x)){
//				cout << "YES\n";
//			}
//			else cout << "NO\n";
//		}
		int n; cin >> n;
		set<int > s;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			s.insert(x);
		}
		int q; cin >> q;
		while(q--){
			int x; cin >> x;
			if(s.find(x) != s.end()){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}



