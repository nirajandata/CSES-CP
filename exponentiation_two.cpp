#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long binpow(long long a, long long b, long long m){
	a%=m;
	long long ans=1;
	while(b){
	 if(b%2){
		 ans=ans*a%m;
	 }
	 a=a*a%m;
	 b>>=1;
	}
	return ans;
}
int main(){
int t;
cin >> t;
while(t--){
	long long a, b , c;
	cin >> a >>  b>>c;
	long long ans=binpow(b,c,mod-1);
	ans=binpow(a,ans,mod);
	cout << ans << endl;
}
return 0;
}
