#include <bits/stdc++.h>
using namespace std;
int da=0;
string bin(int n){
	string val;
	for(int i=da;i;i--){
		val+=(n&1?'1':'0');
		n>>=1;
		
	}
	reverse(val.begin(),val.end());
	return val;
	
	
}
int main(){
	int n;
	cin >>n;
	int v=0;
	da=n;
	int d=1<<n;
	for(int i=0;i<d;i++){
	 int gr= i^(i>>1);
	 cout << bin(gr) << endl; 
	}
	return 0;
}
