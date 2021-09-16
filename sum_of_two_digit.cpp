// https://cses.fi/problemset/task/1640/
#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	long long x;
	vector<long long> v;
	cin >> n >>x;
	for( int  i=0;i<n;i++){
		long long input;
		cin >> input;
		v.push_back(input);
	}
	vector<long long> t=v;
	sort(v.begin(),v.end());
	 long long mi=0,ma=n-1,m=-1,a=-1;
	while(mi!=ma){
		if((v[mi]+v[ma])==x){
			m=v[mi];
			a=v[ma];
			break;
		}
		else if(v[mi]+v[ma]>x){
			ma--;
			
		}
		else mi++;
	}	
//	cout <<m <<a;
	if(m>0){
	array<long long,2> arr;
	 int count =0;
	for(long long i=0;i<n;i++){
		if(t[i]==a or t[i]== m){
			arr[count]=i+1;	
			count++;
		}
		if(count ==2){
			break;
		}
	}
	
	cout <<arr[0] <<" " <<arr[1];
	}
	else
	cout <<"IMPOSSIBLE";
	return 0;
}
