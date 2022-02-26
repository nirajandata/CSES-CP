#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	long long val=n*(n+1);
	val/=2;
	if(val%2) cout << "NO" << endl;
	else{
		long long v=(n+1);
		cout << "YES" <<endl;
		if(n%2){
			int c=1;
			cout << v/2 << endl;
			for(int i=1;c<=n;i++){
				if(c%3==0) c++;
				if(c>n) break;
	 			cout <<c <<  " ";
				if(c%4==0) c+=3;
				else c++;
			}
			c=3;
			cout << endl;
			cout << n/2 <<  endl;
			for(int  i=1;c<=n;i++){
			 	if(c%3 and c%4==0)c++;	
				cout << c << " "  ;
			      if(c%4==0 and c%3==0) c+=3;
			      else if(c%2==0 )c+=2;
				else c++;
			}
		}
		else{
		 int c=1,m=3;
		 cout <<  v/2 << endl;
		 for(int i=1;c<=n;i++){
			 cout << c << " ";
			 c+=(c%(m+1))?3:1;
 
		 }
		 cout << endl;
		c=2;
		cout << v/2 << endl;
		while(c<=n){
			c+=(c%4?0:2);
			if(c>n)break;
			cout << c << " ";
			c++;
		}
		}
		cout << endl;
		}
	return 0;
}
