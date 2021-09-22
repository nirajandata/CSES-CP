#include <bits/stdc++.h>
using namespace std;
int dp[1000000];
int main(){
	int n;
	cin >>n;
	const int m=1e9+7;
	dp[0]=1;
	for(int i=1;i<=n;i++){
	for(int j=1;j<=i and j<=6;j++){
	dp[i]=(dp[i]+dp[i-j])%m;
	
	}
	}
	cout <<dp[n];
	return 0;
}
