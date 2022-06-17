#include<bits/stdc++.h>
using namespace std;
int a[101],n;
void in(int i){
	for(int j=0;j<=i;j++) cout<<a[j]<<" ";
	cout<<endl;
}
void insertionSort(){
	cout<<"Buoc 0: "<<a[0]<<endl;;
	for(int i=1; i<n; i++){
		int tmp = a[i];
		int j = i-1;
		while(j>=0 && a[j]>tmp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = tmp;
		cout<< "Buoc " << i << ":"<< " ";
		in(i);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	insertionSort();
}

