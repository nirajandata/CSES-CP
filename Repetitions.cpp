#include <bits/stdc++.h>
using namespace std;
int main(){
	string n;
	long long count=1;
	long long tr=1;
	cin >> n;
	for(int i=0;i<n.size()-1;i++){
		if(n[i]==n[i+1]){
			tr++;
//		cout <<n[i] <<" milyo" <<tr <<endl;
		}
		else{
			count=max(count,tr);
			tr=1;
//		cout <<n[i] <<"not " <<endl;
		}
	}
	// double check so if that string is same
	count=max(count,tr);
	cout <<count;
	return 0;
}
