#include <bits/stdc++.h>
using namespace std;
const int mx=1e6+1;
int counts[mx];
int main(){
	int n,x;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> x;
		counts[x]++;
	}
	int ml=mx;
	// this trick is for finding the multiple of i
	for(int i=ml-1;i;i--){
		int acc=0;
		for(int j=i;j<ml;j+=i){
			acc+=counts[j];	
		}
		// this is safe move because we started from larger value and gcd can't be larger than the largest value so 
		if(acc>1) {
			cout << i ;
			break;
		}
	}
	return 0;
}
