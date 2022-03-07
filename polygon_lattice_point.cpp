//thanks errichto
#include <bits/stdc++.h>
using namespace std;
struct P{
 long long x,y;
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
	cin>>n;
	vector<P> cord(n);
	for(int i=0;i<n;i++)  cord[i].r();
	long long bound=0,area=0,inside=0;
	for(int i=0;i<n;i++){
		area+=cord[i]*cord[i+1==n?0:i+1];
	}
	area=abs(area);
	for(int i=0;i<n;i++){
	 int j=(i+1)%n;
	 P change=cord[j]-cord[i];	 
	 bound+=gcd(abs(change.x),abs(change.y));
	}
	inside=(area-bound+2)/2;
	cout << inside <<" " << bound <<endl;
 
}
