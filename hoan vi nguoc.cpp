#include<bits/stdc++.h>
using namespace std;
// Input	Output
// 2		
// 2		21 12
// 3	 	321 312 231 213 132 123 
      

int n, a[100], ok = 1;
void init(){
	for(int i = 1; i<=n; i++){
		a[i] = n - i + 1;
	}
}

void sinh(){
	int i = n - 1;
	while(i > 0 && a[i] < a[i+1]){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		int k = n;
		while(a[k] > a[i]){
			k--;
		}
		swap(a[k], a[i]);
		int l = i + 1, r = n;
		while(l <= r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}

void in(){
	for(int i=1; i<=n; i++){
		cout << a[i];
	}
	cout << " ";
}
int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 	
	int test = 1;
	cin >> test;	
	while(test--){
		cin >> n;
		ok = 1;
		init();
		while(ok){
			for(int i=1; i<=n; i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
	return 0;
}



