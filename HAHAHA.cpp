#include<bits/stdc++.h>
using namespace std;
// Input	Output
// 2
// 2		HA
// 4		HAAA
// 			HAHA



int n, k, ok = 1;
int a[100];

bool check(){
	if(a[n] == 1 || a[1] == 0) return false;
	for(int i=1; i<n; i++){
		if(a[i] == a[i+1] && a[i] == 1) return false;
	} 
	return true;
}

void sinh(){	
	for(int i=1; i<=n; i++) a[i] = 0;
		while(ok == 1){
			if(check()){
				for(int i=1;i<=n;i++){
					if(a[i] == 0) cout << "A";
					else cout << "H";
				}
				cout << endl;
			}
			int i = n;
			while(i > 0 && a[i] != 0){		
			a[i] = 0;
			i--; // giảm dần
		}
		if(i > 0 ) a[i] = 1;
		else ok = 0;
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
		ok = 1;
		cin >> n;
		sinh();
	}
	return 0;
}



