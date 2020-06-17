  /*  HARD WORK FOREVER PAYS  */
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
	while(cin>>n){
		char s,c[n+1][n+1];
		int i,j,ans=0,mi;
		vector<PII> v,v1;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				cin>>s;
				c[i][j]=s;
				if(s=='1'){
					v.pb({i,j});
				}
				else if(s=='3'){
					v1.pb({i,j});
				}
			}
		}
		for(auto u:v){
			mi=INT_MAX;
			for(auto u1:v1){
				mi=min(abs(u.f-u1.f)+abs(u.s-u1.s),mi);
			}
			ans=max(mi,ans);
		}
		cout<<ans<<"\n";
	}
    return 0; 
} 
