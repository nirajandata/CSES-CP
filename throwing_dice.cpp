//errichto matrix exp template
// task link : https://cses.fi/problemset/task/1096/
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i = 0; i < (n); i++)
const int mod = 1e9 + 7;
int s;

struct Matrix {
	vector<vector<int>> a = vector<vector<int>>(s, vector<int>(s));
	Matrix operator *(const Matrix& other) {
		Matrix product;
		REP(i,s)REP(j,s)REP(k,s) {
			product.a[i][k] = (product.a[i][k] + (long long) a[i][j] * other.a[j][k]) % mod;
		}
		return product;
	}
};
Matrix expo_power(Matrix a, long long k) {
	Matrix product;
	REP(i,s) product.a[i][i] = 1;
	while(k > 0) {
		if(k % 2) {
			product = product * a;
		}
		a = a * a;
		k /= 2;
	}
	return product;
}
 
int main(){
    //recurrence f(n)=f(n-1)+ .. +f(n-6);
    long long n;
    cin>>n;
    s=6;
    Matrix single;
    single.a[5][5]=1;
    REP(i,5) single.a[i][i+1]=1,single.a[5][i]=1;
 
    Matrix total=expo_power(single,n);

    cout<< total.a[5][5] << endl;
 
    return 0;
}
