#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a, b,fl=0;
	cin >> a >>b;
	int mi=min(a,b),ma=max(a,b);
	if(!(ma>2*mi)){
		ma%=3,mi%=3;
		if(ma<mi) swap(ma,mi);
		if((ma==2 and mi==1) or (!(ma))) fl=1;
	}
	cout <<(fl?"YES":"NO") << endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		solve();
	}
	return 0;
}
