#include <bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	sort(n.begin(), n.end());	
	vector<string> v;
	do{
		v.push_back(n);
	}while(next_permutation(n.begin(),n.end()));
	cout << v.size() << endl;
	for(auto a:v) cout << a << endl;
	return 0;
}
