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
	int t,i;
	while(cin>>t,t!=-1){
		int cnt=0,wr=0,a=0;
		string s1,s2;
		cin>>s1>>s2;
		map<char,int> mp,mp2;
		for(i=0;i<s1.size();i++){
			mp[s1[i]]++;
		}
		for(i=0;i<s2.size();i++){
			if(mp2[s2[i]]==0){
				if(mp[s2[i]]>0){
					cnt+=mp[s2[i]];
					mp[s2[i]]=-1;
				}
				else if(mp[s2[i]]==0){
					wr++;
				}
				if(cnt==s1.size()){
					cout<<"Round "<<t<<"\n";
					cout<<"You win.\n";
					a=1;
					break;
				}
				if(wr>=7){
					cout<<"Round "<<t<<"\n";
					cout<<"You lose.\n";
					a=1;
					break;
				}
			}
			mp2[s2[i]]=1;
		}	
			if(a==0){
				cout<<"Round "<<t<<"\n";
				cout<<"You chickened out.\n";
			}


	}
	return 0;	
}
