#include<bits/stdc++.h>
using namespace std;

int a[101], n;
void in(){
	for(int i=0; i<n; i++) 	cout << a[i] << " ";
	cout << endl; 
}

void solve(){
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(a[i], a[min]);
		cout << "Buoc " << i+1 << ":" << " ";
		in();
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		solve();
	}
	return 0;
}



