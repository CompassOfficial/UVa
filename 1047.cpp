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
	int n,m,cs=1;
	while(cin>>n>>m,n|m){
		int i,ara[n],j,mx=0,ans;
		for(i=0;i<n;i++){
			cin>>ara[i];
		}
		int t,num,x,cnt=0;
		cin>>t; 
		int cost[t];
		vector<int> v;
		for(i=0;i<t;i++){
			cin>>num;
			cnt=0;
			for(j=0;j<num;j++){
				cin>>x;
				cnt|=(1<<(x-1));
			}
			v.pb(cnt);
			cin>>x;
			cost[i]=x;
		}
		for(i=1;i<(1<<n);i++){
			int bit=__builtin_popcountll(i);
			int cst=0;
			for(j=0;j<n;j++){
				if(i&(1<<j)){
					cst+=ara[j];
				}
			}
			if(bit==m){
				for(j=0;j<v.size();j++){
					if((v[j]&i)>=2){
						cst-=((__builtin_popcountll(v[j]&i)-1)*cost[j]);
					}
				}
				if(max(cst,mx)>mx){
					mx=max(cst,mx);
					ans=i;
				}				
			}

		}
		cout<<"Case Number  "<<cs<<"\n";
		cout<<"Number of Customers: "<<mx<<"\n";
		cout<<"Locations recommended:";
		for(i=0;i<n;i++){
			if(ans&(1<<i)){
				cout<<" "<<i+1;
			}
		}
		cout<<"\n\n";
		cs++;
	}
	return 0; 
} 
