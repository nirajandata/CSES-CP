#include <bits/stdc++.h>
using namespace std;
vector<int> kmp(const string &s){
	int n=s.size();
	vector<int> pie(n);
	for(int i=1;i<n;i++){
		int j=pie[i-1];
		while(j>0 && s[i]!=s[j]){
			 j=pie[j-1];
		}
		if(s[i]==s[j]) j++;
		pie[i]=j;
	}
	return pie;
}
int main(){
	int count=0, l=0;
	string a,b;
	cin >> b>>a;
	l=a.size();
	string s=a+'$'+b;
	vector<int> pie=kmp(s);
	for(auto val:pie){
		count+=(l==val);
	}
	cout << count <<endl;
	return 0;
}
