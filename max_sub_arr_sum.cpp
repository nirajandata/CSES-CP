// https://cses.fi/problemset/task/1643/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n; 
	long long ma=-1e10,comp=-1e10;
 
	for(int i=0;i<n;i++){
		long long input;
		cin >>input;
		ma=max(input,input+ma);	
		comp=max(ma,comp);
	}	
	cout <<comp;	
	return 0;
}
