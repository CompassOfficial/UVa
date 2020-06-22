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
		map<int,int> mp;
		int alice=0,n,i,j,col,mi,s=0;
		cin>>n;
		int ara[n+1][n+1],row[n+1];
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				cin>>ara[i][j];
			}
		}
		for(i=1;i<=n;i++){
			row[i-1]=i;
		}
		int mx=INT_MAX;
		do{
			col=0;
			alice=0;
			for(i=1;i<=n;i++){
				mi=INT_MAX;
				for(j=1;j<=n;j++){
					if((col&(1<<(j-1)))==0){
						if(mi>ara[row[i-1]][j]){
							mi=ara[row[i-1]][j];
							s=j;
						}
					}
				}
				alice+=mi;
				col|=(1<<(s-1));
			}
			mx=min(alice,mx);
		}while(next_permutation(row,row+n));
		cout<<mx<<endl;

	}
	return 0; 
} 
