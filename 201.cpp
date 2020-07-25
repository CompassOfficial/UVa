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
typedef pair<pair<int,int>,pair<int,int>> PII;
int squares[10];
map<PII,int> ara;
int n;
void getsquares(int i,int j){
	int l,m,k,cnt=0;
	for(l=1;l<n;l++){
		int len=l;
		cnt=0;
		for(m=j+1;m<n&&len;m++,len--){
			if(ara[{{i,m},{i,m-1}}]==0) break;;
		}
		if(len==0) cnt++;
		m--;
		len=l;
		for(k=i+1;k<n&&len;len--,k++){
			if(ara[{{k,m},{k-1,m}}]==0) break;	
		}
		if(len==0) cnt++;
		len=l;
		for(m=i+1;m<n&&len;m++,len--){
			if(ara[{{m,j},{m-1,j}}]==0) break;
		}
		if(len==0) cnt++;
		len=l;
		m--;
		for(k=j+1;k<n&&len;len--,k++){
			if(ara[{{m,k},{m,k-1}}]==0) break;
		}
		if(len==0) cnt++;
		if(cnt==4){
			squares[l]++;
		}
	}
}
int main() 
{ 
	turbo();
	int cs=1;
	while(cin>>n){
		if(cs>1){
			cout<<"\n";
			cout<<"**********************************"<<"\n\n";
		}
		int points,i,j,x,y,l;
		cin>>points;
		memset(squares,0,sizeof(squares));
		ara.clear();
		char c;
		for(i=0;i<points;i++){
			cin>>c>>x>>y;
			if(c=='H'){
				ara[{{x-1,y-1},{x-1,y}}]=1;
				ara[{{x-1,y},{x-1,y-1}}]=1;
			}
			else{
				ara[{{y-1,x-1},{y,x-1}}]=1;
				ara[{{y,x-1},{y-1,x-1}}]=1;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				getsquares(i,j);
			}
		}
		cout<<"Problem #"<<cs<<"\n\n";
		int a=0;
		for(i=1;i<=9;i++){
			if(squares[i]){
				a=1;
				cout<<squares[i]<<" square (s) of size "<<i<<"\n";
			}
		}
		if(a==0){
			cout<<"No completed squares can be found."<<"\n";
		}
		cs++;
	}
	return 0; 
} 
