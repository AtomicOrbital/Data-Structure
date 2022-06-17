#include<bits/stdc++.h>
using namespace std;

int prime(int i){
	if(i<2) return 0;
	if(i == 2 || i == 3) return 1;
	else if(i<=3) return 0;
	else if(i%2==0||i%3==0) return 0;
	else{
		for(int j=5; j<=sqrt(i); j+=6)
			if(i%j==0||i%(j+2)==0) return 0;
		return 1;
	}
}

//bool numberDigitReverse(int n){
//	int rev = 0;
//	while(n != 0){
//		int tmp = n % 10;
//		rev = rev * 10 + tmp;
//		n = n / 10;
//	}
//	
//	if(prime(rev))
//		return true;
//	return false;
//}

bool sumDigitPrime(int n){
	int sum=0;
	int rev = 0;
	while(n!=0){
		int tmp = n % 10;
		if(tmp==0 || tmp==1 || tmp==4 || tmp==6 || tmp==8 || tmp==9) return false;
		rev = rev * 10 + tmp;
		sum += tmp;
		n = n / 10;
	}
	
	if(prime(sum) && prime(rev))
		return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int count=0;
		for(int i=pow(10,n-1); i<=pow(10,n)-1; i++){		
			if( sumDigitPrime(i)  && prime(i)){
				count++;
			}
		}
		cout << n <<" "<< count << endl;
	}
	return 0;
}
