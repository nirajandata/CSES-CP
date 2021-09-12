#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin >>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int input;
		cin >>input;
		v.push_back(input);
	}
	ll mi=0,sub;
	for(int i=0;i<n-1;i++){
		if(v[i]>v[i+1]){
		sub=v[i]-v[i+1];
		mi+=sub;
		v[i+1]+=sub;	
		}
 
	}
	cout <<mi;
	return 0;
}
