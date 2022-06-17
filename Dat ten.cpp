#include<bits/stdc++.h>
using namespace std;

int n, k;
int ok = 1;
char a[100];

void init(){
	for(int i=0; i<k; i++){
		a[i] = i + 'A';
	}
}

void sinh(){
	int i = k - 1;
	while(i >= 0 && a[i] == n - k + i + 'A'){
		i--;
	}
	if(i < 0){
		ok = 0;
	}
	else{
		a[i]++;
		for(int j=i+1; j<n; j++){
			a[j] = a[j-1] + 1;
		}
	}

}

void in(){
	for(int i=0;i<k;i++){
		cout << a[i];
	}
	cout << endl;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		cin >> n >> k;
		ok = 1;
		init();
		while(ok){
			in();
			sinh();
		}
	}
	return 0;
}