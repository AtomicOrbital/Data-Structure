#include<bits/stdc++.h>
using namespace std;

int n, a[1001];
int ok=1;

void sinh(){
	int i = n;
	while(i > 0 && a[i] == 0) {
		i--;
	}
	
	if(i == 0){
		for(int i=1; i<=n; i++) a[i] = 1;
	}
	else {
		for(int j=i; j<=n; j++){
			a[j] = 1 - a[j];
		}
	}
}

void in(){
	for(int i=1;i<=n;i++){
		cout << a[i];
	}
	cout << endl;
}

int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 	
	int test = 1;
	cin >> test;	
	while(test--){
		string s;
		cin >> s;
      	n=s.size();
      	for(int i=0;i<n;i++){
      		a[i+1]=s[i]-'0';
	  	}
	  	sinh();
	 	in();
	}
	return 0;
}



