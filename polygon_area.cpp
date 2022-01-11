#include <bits/stdc++.h>
using namespace std;
struct P{
 int x,y;
 void r(){
	 cin >> x >>y;
 }
 P  operator -(const P& b)const {
	return P{x-b.x,y-b.y};
 }
 void operator -=(const P& b) {
	 x-=b.x;
	 y-=b.y;
 }
 long long operator *(const P& b) const{
	 return (long long)x*b.y - (long long) b.x*y; 
 }
 long long triangle(const P& b ,  const P& c) const{
	return (b-*this) * (c-*this);
 }
};
int main(){
	int n;
	cin >> n;
	vector<P> poly(n);
	for(P& p:poly)
	{
		p.r();
	}
	long long area=0;
	for(int i=0;i<n;i++){
		area+=poly[i]*poly[i==n-1?0:i+1];
		
	}
	cout << abs(area) <<endl;
}
