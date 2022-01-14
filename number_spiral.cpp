#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
	 long long  y,x;
	 cin >> y >>x;
	 if(x==1 and y==1){
		 cout << 1 <<endl;
		 continue;		 
	 }
	 if(y>x){
		 if(y%2==0){
			 cout <<(y*y)-x+1;
		 }
		 else 
		    cout << ((y-1)*(y-1))+x;

	 }
	 else if(x>y){
		 if(x%2!=0)
			cout <<x*x-y+1;
		 else cout << (x-1)*(x-1)+y;
	 }
	 else{
		 cout << y*y-x+1;
	 }
	 
	 cout << endl;
	}
	return 0;

}
