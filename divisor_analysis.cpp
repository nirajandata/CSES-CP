//thanks usaco.guide
#include <bits/stdc++.h>
using namespace std;
 
const long long mod=1e9+7;
 
//binary exp algo
long long bin(long long base , long long pow){
	long long ans=1;
	while(pow){
		if(pow&1) ans= ans *base %mod;
		base =base*base %mod;
		pow>>=1;
	}
	return ans;
}
int main (){
	int n;
	cin >>n;
	vector<long long> p(n),k(n);
	for(int i=0;i<n;i++) cin >> p[i] >>k[i];
	long long s=1,pr=1,c1=1,c2=1;
	for(int i=0;i<n;i++){
	 c1=c1*(k[i]+1)%mod;
	 s=s*(bin(p[i],k[i]+1)-1)%mod*bin(p[i]-1,mod-2)%mod;
	 pr=bin(pr,k[i]+1)*bin(bin(p[i],(k[i]*(k[i]+1)/2)),c2)%mod;
	 c2=c2*(k[i]+1)%(mod-1);
	}
	cout <<c1 <<" " <<s <<" " <<pr;
	return 0;
}
