#include<bits/stdc++.h>
using namespace std;
// Input	Output
// 2		
// 2		AA AB BA BB
// 3		AAA AAB ABA ABB BAA BAB BBA BBB	

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 	
	int test = 1;
	cin >> test;	
	while(test--){
		int n;
		cin >> n;
		int A[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		while(true){
			for(int i=0; i<n; i++){
				if(A[i] == 0) cout << 'A' << " ";
				else cout << 'B' << " ";
			}
			cout << endl;
			int position = n - 1;
			while(A[position] == 1){
				position--;
			}	

			if(position == -1 ) break;
			A[position] = 1;
			for(int i=position+1; i<n; i++) A[i] = 0;
		}		
	}
	return 0;
}



