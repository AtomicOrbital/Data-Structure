#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		int grade;
		cin >> grade;
	
		if(grade >= 38){
			int r = grade % 5;
			if( 5 - r < 3){
			grade = grade + (5 - r); 			
		}		
	}
	cout << grade << endl;				
	}
	return 0;
}

