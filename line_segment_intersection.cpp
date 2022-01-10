#include <bits/stdc++.h>
using namespace std;

struct P{
int x, y;
void r(){
	cin >> x >>y;
}
P operator -(const P& b) const {
	return P{x-b.x,y-b.y};
}
void operator -=(const P& b) {
	x-=b.x;
	y-=b.y;
}
long long operator *(const P& b) const{
	return (long long) x*b.y-(long long) b.x*y;
}
long long triangle(const P& b, const P& c) const{
	return (b-*this)*(c-*this);
}
};
void solve(){
	string y="YES", n="NO";
	P p1,p2,p3,p4;
	p1.r();
	p2.r();
	p3.r();
	p4.r();
	if((p2-p1)*(p4-p3)==0){
	 if(p1.triangle(p2,p3)){
		 cout <<n;
		 return ;
	 }
	 for(int i=0;i<2;i++){
		 if(max(p1.x,p2.x)<min(p3.x,p4.x)|| max(p1.y,p2.y)<min(p3.y,p4.y)){
			cout <<n ;
			return ;
		 }
			
		 swap(p1,p3);
		 swap(p2,p4);
	 }
	 cout << y ;
	 return ;
	}
	for(int i=0;i<2;i++){
	long long a=(p2-p1)*(p3-p1);
	long long b=(p2-p1)*(p4-p1);
	if((a<0 and b<0) or (a>0 and b>0)){
		cout << n;
		return ;
	}
	swap(p1,p3);
	swap(p2,p4);

	}
	cout << y;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		solve();
		cout << endl;
	}
}
