
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
	int n,k,m;
	while(scanf("%d%d%d",&n,&m,&k),n||m||k){
		int ara[n+1],suck[n+1];
		memset(ara,0,sizeof(ara));
		memset(suck,0,sizeof(suck));
		vector<int> v;
		int sz=0,i=1,j=n,op1=0;
		while(sz!=n){
			int tem=0,mark1=0,mark2=0;
			for(;i<=n;i++){
				if(ara[i]==0){
					tem++;
				}
				if(tem==m){
					sz++;
					mark1=i;
					break;
				}
				if(i==n){
					i=0;
				}
			}
			if(sz!=n){
				tem=0;
				int op=0;
				for(;j>=1;j--){
					if(ara[j]==0){
						tem++;
					}
					if(tem==k){
						sz++;
						mark2=j;
						break;
					}
					if(j==1){
						j=n+1;
					}
					op++;
				}
			}
			if(mark1==mark2){
				v.pb(mark1);
				sz--;
				ara[mark1]=1;
				suck[mark1]=1;
			}
			else{
				if(mark1>0){
					v.pb(mark1);
				}
				if(mark2>0){
					v.pb(mark2);
				}
				ara[mark1]=ara[mark2]=1;
			}
			op1++;
		}
		int coma=0;
		for(i=0;i<n;i++){
			if(v[i]<=9){
				cout<<"  "<<v[i];
			}
			else{
				cout<<" "<<v[i];
			}
			coma++;
			if(suck[v[i]]){
				cout<<",";
				coma=0;
			}
			if(coma==2&&i!=n-1){
				cout<<",";
				coma=0;
			}
		}
		cout<<"\n";
	}
	return 0;	
}
