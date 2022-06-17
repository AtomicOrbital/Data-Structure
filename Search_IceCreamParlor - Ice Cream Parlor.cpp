#include<bits/stdc++.h>
using namespace std;

void solve(int money,vector<int > priceIcream ){
//	int money, priceIcream;
//	cin >> money >> priceIcream;

	
	bool found = false;
	
	int sunny = 0, johnny = 0;
	for(int i=1; i<priceIcream.size(); i++){
		for(int j=1; j<priceIcream.size(); j++){
			if(i == j) continue;
			if(priceIcream[i] + priceIcream[j] == money){
				sunny = i;
				johnny = j;
				found = true;
				break;
			}
		}
	}
	cout << min(sunny, johnny) << " " << max(sunny, johnny) << endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		int money, price;
		cin >> money >> price;
		vector<int > priceIcream(price + 1);
		for(int i=1; i<=price; i++ ) cin >>  priceIcream[i];

		solve(money, priceIcream);
	}
	return 0;
}

