#include <bits/stdc++.h>
using namespace std;
const long long m=1e9+7;
int main(){
	long long n;
	cin >> n;
	long long ans=0;
	for(long long i=1,j;i<=n;i=j){
		long long q=n/i; j=n/q+1;
		long long x=j-i,y=i+j-1;
		if(x%2==0) x/=2;
		else  y/=2;
		x%=m,y%=m;
		ans=(ans+q%m*x%m*y%m)%m;
	}
	cout << ans << endl;
	return 0;
}
