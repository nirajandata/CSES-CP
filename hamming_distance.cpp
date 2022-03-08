#include <bits/stdc++.h>
using namespace std;
int n,k;
long long dec(string a){
	long long val=0;
	for(int i=k-1;i>=0;i--){
	  if(a[k-i-1]=='1'){
		val+=(1<<i);
	  }
	}	
	return val;
}
int main(){
cin >>n >>k;
vector<long long> arr(n);
for(int i=0;i<n;i++){
 string v;
 cin >>v;
 arr[i]=dec(v);
}
int ans=1e9;
for(int i=0;i<n;i++){
 for(int j=i+1;j<n;j++)
	ans=min(ans,__builtin_popcount(arr[i]^arr[j]));
}
cout << ans << endl;
}
