#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
int ok = 1;
vector<vector<int>> res;
vector<int> ans;
void init(){
	k = 1;
	a[k] = n;
}
void sinh(){
	int i = k;
	int D, R, S;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]--;//bat dau tu vi tri thu k neu van la 1 thi lui den vi tri 1 dau tien lon hon 1
		D = k - i + 1;//Gia tri con thieu la k-i+1
		R = D / a[i];//viet tiep R so them vao day
		S = D % a[i];// viet them S vao cuoi day
		k = i;
		if(R > 0){
			for(int j=i+1;j<=i+R;j++){
				a[j] = a[i];
			}
			k = k + R;
		}
		if(S > 0){
			k = k + 1;
			a[k] = S;
		}
	}
}
void in(){
	ans.clear();
	for(int i=1;i<=k;i++){
		ans.push_back(a[i]);
	}
	res.push_back(ans);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin>>test;	
	while(test--){
		res.clear();
		ans.clear();
		cin >> n;
		init();
		ok = 1;
		while(ok){
			in();
			sinh();	
		}
		cout<<res.size()<<endl;
		for(int i=0;i<res.size();i++){
			cout<<"(";
			for(int j=0;j<res[i].size()-1;j++){
				cout<<res[i][j]<<" ";
			}
			cout<<res[i][res[i].size()-1]<<") ";
		}
		cout<<endl;
	}
	return 0;
}
