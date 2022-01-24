#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int dp[1000][1000], path[1000][1000];
int main(){
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
	 for(int j=0;j<n;j++){
		 char v;
		 cin >> v;
		 if(v=='.'){
		   path[i][j]=1;
		 }
	 }
	}
	dp[0][0]=1;
	for(int i=0;i<n;i++){
	 for(int j=0;j<n;j++){
		if(!(path[i][j])) dp[i][j]=0;
	 else{
	  if(i) dp[i][j]+=dp[i-1][j];
	 if(j)  dp[i][j]+=dp[i][j-1];
	   dp[i][j]%=mod;
	 }
	 }
	}
	cout << dp[n-1][n-1] <<endl;
	return 0;
}
