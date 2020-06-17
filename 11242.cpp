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
	int f,r,i,j;
	while(cin>>f,f){
		cin>>r;
		vector<double> v;
		double ara[f],ara1[r],mx=0;
		for(i=0;i<f;i++){
			cin>>ara[i];
		}
		for(i=0;i<r;i++){
			cin>>ara1[i];
		}
		for(i=0;i<f;i++){
			for(j=0;j<r;j++){
				v.pb(ara[i]/ara1[j]);
			}
		}
		sort(v.begin(),v.end());
		for(i=0;i<v.size()-1;i++){
			mx=max(mx,v[i+1]/v[i]);
		}
		cout<<fixed<<setprecision(2)<<mx<<"\n";
	}
    return 0; 
} 
