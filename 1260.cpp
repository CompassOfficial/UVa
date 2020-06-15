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
	int t;
	cin>>t;
	while(t--){
		int n,i,j,cnt=0;
		cin>>n;
		int ara[n];
		for(i=0;i<n;i++){
			cin>>ara[i];
		}
		for(i=1;i<n;i++){
			for(j=i-1;j>=0;j--){
				if(ara[j]<=ara[i]){
					cnt++;
				}
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}
