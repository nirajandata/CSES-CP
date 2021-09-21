#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >>n;
	long long m=1e9+7;
	long long s=1;
	for(int i=0;i<n;i++){
	s=(2*s)%m;
	}
	cout <<s;
	return 0;
}
