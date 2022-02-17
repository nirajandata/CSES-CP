#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q; cin >>n >>q;
	vector<vector<int>> forest(n+1,vector<int>(n+1)),tree(n+1,vector<int>(n+1));
	for(int i=0;i<n;i++){
	 for(int j=0;j<n;j++){
		char a;
		cin >>a;
		forest[i+1][j+1]+=(a=='*');
	 }
	}
	for(int i=1;i<=n;i++){
	 for(int j=1;j<=n;j++){
	   tree[i][j]=tree[i-1][j]+tree[i][j-1]+forest[i][j]-tree[i-1][j-1];
	 }
	}
	for(int l=0;l<q;l++){
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >>  y2 ;
	cout << tree[x2][y2]-tree[x1-1][y2]-tree[x2][y1-1]+tree[x1-1][y1-1] << endl;
	}
}
