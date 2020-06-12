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
	int n;
	while(cin>>n,n){
		int i,j,x,cnt=0,mx=0;
		map<vector<int>,int> mp;
		for(i=0;i<n;i++){
			vector<int> v1;
			for(j=0;j<5;j++){
				cin>>x;
				v1.pb(x);
			}
			sort(v1.begin(),v1.end());
			mp[v1]++;
			mx=max(mx,mp[v1]);
		}
		for(auto u:mp){
			if(u.s==mx){
				cnt+=u.s;
			}
		}
		cout<<cnt<<"\n";
	}
    return 0; 
} 
