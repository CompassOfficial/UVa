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
typedef pair<ll,pair<ll,ll>> PII;
int main() 
{ 
	turbo();
	ll n,sq,sp;
	while(cin>>n>>sp>>sq){
		ll j,i,limit=(n-1)*sq;
		vector<PII> v;
		sp=sp*(n-1);
		for(i=0;i<=31;i++){
			for(j=0;j<=31;j++){
				ll push=(sp+(sp<<i))>>j;
				if(push>=limit){
					v.pb({push,{i,j}});
				}
			}
		}
		sort(v.begin(),v.end());
		cout<<v[0].f+sq<<" "<<v[0].s.f<<" "<<v[0].s.s<<"\n";

	}
	return 0; 
} 
