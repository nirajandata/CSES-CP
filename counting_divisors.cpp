#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin >> n;
	while(n--){
	 cin >> x;
	 int counter=0;
	 for(int i=1;i*i<=x;i++)
	{
	 if(!(x%i)){
		 counter++;
		 int j=x/i;
		 if(i!=j and !(x%j)) counter++;
	 }
	}
	 cout << counter <<"\n";
	}
	return 0;
}
