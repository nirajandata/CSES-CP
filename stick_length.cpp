#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	vector<int> p(n);
	for(int i=0;i<n;i++){
		cin >> p[i];
	}
	sort(p.begin(),p.end());
	long long m=p[n/2],x=0;
	//cout << m << endl;
	for(int i=0;i<n;i++){
	 //cout << abs(p[i]-m) << endl;
	  x+=abs(p[i]-m);	
	}
	cout << x <<endl;
	return 0;

}
