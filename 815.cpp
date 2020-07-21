
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
	while(cin>>n>>m,n||m){
		int x,i,j;
		vector<int> v;
		double cubic,level,region;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>x;
				v.pb(x);
			}
		}
		cin>>cubic;
		cubic/=100;
		level=cubic;
		double ans=100000000;
		sort(v.begin(),v.end());
		for(i=0;i<v.size();i++){
			level+=v[i];
			if(level/(i+1)<ans){
				ans=level/(i+1);
				region=i+1;
			}		
		}
		cout<<"Region "<<cs<<"\n";
		cout<<"Water level is "<<fixed<<setprecision(2)<<ans<<" meters."<<"\n";
		cout<<fixed<<setprecision(2)<<(region/(n*m))*100.0<<" percent of the region is under water."<<"\n\n";
		cs++;
	}
	return 0; 
} 
