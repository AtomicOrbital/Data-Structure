#include<bits/stdc++.h>
using namespace std;
// int n,k,a[100],ok;
// void init(){
// 	k = 1;
// 	a[k] = n;
// }
// void sinh(){
// 	int i=k; // xuất phát từ vị trí cuối cùng của hiện tại
// 	while(i >= 1 && a[i] == 1){
// 		i--;
// 	}
// 	if(i == 0){
// 		ok = 0;
// 	}else{
// 		a[i]--;// giảm thằng hiện tại đi 1 đơn vị
// 		int d=k-i+1;
// 		int p=d/a[i];
// 		int r=d%a[i];
// 		k=i;
// 		if(p!=0){
// 			for(int j=1;j<=p;j++){
// 				a[i+j]=a[i];
// 			}
// 			k+=p;
// 		}
// 		if(r!=0){
// 			a[k+1]=r;
// 			k++;
// 		}
// 	}
// }
// void in(){
// 	for(int i=1;i<=k;i++){
// 		cout<<a[i]<<" ";
// 	}
// }
int main(){
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int A[100] ;
	int n ,k ;
	int test;
	cin >> test;
	while(test--){
		cin >> n >> k;
		while(true){
		for(int i=0; i<k; i++) cout << A[i] << " ";
		cout << endl;

		int position = k - 1; // position = 4 mảng có 5 phần tử
		while(position >= 0 && A[position] == n - k + position + 1) position--;

		if(position == -1) break;

		A[position] += 1;
		int val = A[position];
		for(int i = position + 1; i<k; i++){
			val++;
			A[i] = val;
		}
	}
}
	return 0;
}



