#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	vector<array<int,2>> v;
	for(int i=0;i<t;i++){
		int a,b;
		cin >> a >>b;
		v.push_back({a,1});
		v.push_back({b,-1});
	}
	sort(v.begin(),v.end());
	int m=0,add=0;
	for(auto c:v){
		add+=c[1];
		m=max(add,m);
	}
	cout << m << endl;
	return 0;
}
