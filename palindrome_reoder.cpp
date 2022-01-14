#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	map<int,int> m;
	
	int n=s.size();
//	cout << n <<endl;
	for(int i=0;i<n;i++){
	  int v=s[i]-'A'+1;
	  m[v]++;
	}
	int od=0,v=0;
	for(int i=1;i<=26;i++){
	   if(m[i]%2){
		v=i;
		od++;
	   }
	 m[i]=m[i]/2;
	}
	if(od>1) cout <<"NO SOLUTION";
        else{
		string ot="";
		for(int i=0;i<=26;i++){
			if(m[i]){
				int count=m[i];
				while(count--){
					ot+=(char) 'A'+i-1;
				}
			}
		}
	 string t=ot;
	 reverse(t.begin(),t.end());
	 cout << ot ;
	 if(v!=0){ 
		char c=(char) 'A'+v-1;
		cout << c ;
	 }
	 cout << t ;
	}	
	return 0;
}
