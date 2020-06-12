#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define f first
#define s second
#define turbo(){	\
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL); \
}
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
int main() 
{ 
	turbo();
	int t;
	cin>>t;
	while(t--){
		double tot=0;
		string s;
		map<string,int> mp;
		while(getline(cin,s)){
			if(s.empty()&& tot==0) continue;
			else if(s.empty()) break;
			mp[s]++;
			tot++;
			
		}
		for(auto u:mp){
			cout<<u.f<<" "<<fixed<<setprecision(4)<<(u.s/tot)*100<<"\n";
		}
		if(t>0){
			cout<<"\n";
		}
	}
    return 0; 
} 
