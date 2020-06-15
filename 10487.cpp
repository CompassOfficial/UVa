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
typedef pair<string,pair<int,int>> PII;
int main()
{
	int n,cs=1;
	while(cin>>n,n){
		vector<int> v;
		int dif,ans,x,q,ara[n],i,j;
		for(i=0;i<n;i++){
			cin>>ara[i];
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				v.push_back(ara[i]+ara[j]);
			}
		}
		sort(v.begin(),v.end());
		cout<<"Case "<<cs<<":\n";
		cin>>q;
		int sz=v.size();
		for(i=0;i<q;i++){
			cin>>x;
			dif=abs(v[0]-x);ans=v[0];
			for(j=1;j<sz;j++){
				if(dif>=abs(v[j]-x)){
					dif=abs(v[j]-x);
					ans=v[j];
					
				}
				else{
					break;
				}
			}
			cout<<"Closest sum to "<<x<<" is "<<ans<<".\n";
		}
		cs++;
	}
	return 0;
}
