#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	 int x1,y1 , x2 , y2 , x3, y3;
	 cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	x2-=x1;
        y2-=y1;
	x3-=x1;
	y3-=y1;
	long long test= (long long) x2*y3-( long long ) x3*y2;
	if(test<0) cout << "RIGHT";
	else if(test>0) cout << "LEFT";
	else cout << "TOUCH";
	cout <<"\n";
	}
	return 0;
}
