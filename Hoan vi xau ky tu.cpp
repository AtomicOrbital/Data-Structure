#include<bits/stdc++.h>
using namespace std;

int n, k,ok = 1;
char a[100];
void sinh(){
	int i = n - 1;
	while(i > 0  && a[i] > a[i+1]){
		i--;
	} 
	if(i == 0){
		ok = 0;
	}
	else{
		int k = n;
		while(a[i] > a[k]) k--;
		swap(a[k],a[i]);
		int l = i + 1,r = n;
		while(l <= r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}

void in(){
	for(int i=1;i<=n;i++){
		cout << a[i];
	}
	cout << " ";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin >> s;
		ok = 1;
		n = s.length();
		for(int i=1; i<=n; i++){
			a[i] = i - 1 + 'A';
		}
		while(ok){
			in();
			sinh();			
		}
		cout << endl;
	}
	return 0;
}



