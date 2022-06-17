#include<bits/stdc++.h>
using namespace std;
// Input	Output
// 2
// 4 2		0011
// 			0101
// 			0110
// 			1001
// 			1010
// 			1100

// 3 2		011
// 			101
// 			110

int n, k, a[100], ok = 1;
void init(){
	for(int i = 1; i<=n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){		
		i--; // giảm dần
	}
	if(i == 0){
		ok = 0;
	}
	else{
		for(int j=i;j<=n;j++) a[j] = 1 - a[j];
	}
}

int check(){
	int count = 0;
	for(int i=1; i<=n;i++){
		if(a[i] == 1) count++;
	}
	if(count == k) return 1;
	return 0;
}

void in(){
	for(int i=1;i<=n;i++){
		cout << a[i];
	cout << " ";
	}
	cout << endl;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 	
	int test = 1;
	cin >> test;	
	while(test--){
		cin >> n >> k;
		ok = 1;
		init();
		while(ok){
			if(check()) in();
			sinh();
		}
		cout << endl;
	}
	return 0;
}



