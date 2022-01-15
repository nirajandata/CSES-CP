#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		long long val=4*(i-1)*(i-2);
		long long fi=i*i;
		long long la=fi*(fi-1)/2;
		cout << la-val << endl;
	}
	return 0;
}
