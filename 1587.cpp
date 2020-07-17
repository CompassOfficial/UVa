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
	int a,b,i;
	while(cin>>a>>b){
		int ara[2][6],taken[6],cnt=0,j;
		memset(taken,0,sizeof(taken));
		ara[0][0]=a;
		ara[1][0]=b;
		vector<int> v;
		v.pb(a);
		v.pb(b);
		for(i=1;i<6;i++){
			cin>>a>>b;
			v.pb(a);
			v.pb(b);
			ara[0][i]=a;
			ara[1][i]=b;
		}
		for(i=0;i<6;i++){
			for(j=0;j<6&&taken[i]==0;j++){
				if((max(ara[0][j],ara[1][j])==max(ara[0][i],ara[1][i]))&&(min(ara[0][j],ara[1][j])==min(ara[0][i],ara[1][i]))&&i!=j&&taken[j]==0){
					taken[j]=1;
					taken[i]=1;
					cnt++;
					break;
				}
			}
		}
		int a=1,cnt1=0,tk[12]={0};
		for(i=0;i<12;i++){
			cnt1=1;
			if(tk[i]==0){
				for(j=0;j<12;j++){
					if(v[i]==v[j]&&i!=j&&tk[j]==0){
						tk[j]=1;
						tk[i]=1;
						cnt1++;
					}					
					if(cnt1==4){
						break;
					}
				}	
				if(cnt1!=4){
					a=0;
				}
			}
		}
		if(cnt==3&&a){
			cout<<"POSSIBLE"<<"\n";
		}
		else{
			cout<<"IMPOSSIBLE"<<"\n";
		}
	}
	return 0;	
}
