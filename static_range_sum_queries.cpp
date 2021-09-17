// static range sum queries
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q,a,b;
	cin >>n >>q;
	vector <long long> v(n);
	for(int i=0;i<n;i++){
		cin >>v[i];
	}
	vector<long long> pre(n);
	for(int i=0;i<n;i++){
		pre[i+1]=pre[i]+v[i];
	}
	for(int i=0;i<q;i++){
		cin >> a >>b;
		cout <<pre[b]-pre[a-1] <<"\n";
	}
	return 0;
}
